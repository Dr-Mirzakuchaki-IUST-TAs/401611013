library IEEE;
use IEEE.STD_LOGIC_1164.all;
use ieee.numeric_std.all;

entity AD7866_model_single is
    generic (
        adc_vref_mv : integer := 3000;
        adc_channel1_mv : integer := 1500;
        adc_channel2_mv : integer := 300;
        channel_bit : std_logic := '0'
    );

    port (
        o_Dout_Serial : out std_logic;
        o_Dout : out std_logic_vector (15 downto 0);
        i_Dout : in std_logic_vector (15 downto 0);
        i_sclk, i_range, i_a0, i_cs : in std_logic
    );
end entity;

architecture Behavioral of AD7866_model_single is
    type State_Type is (S0, S1, S2, S3);
    signal CurrentState : State_Type := S0;

    signal m_Dout : std_logic_vector (15 downto 0);
    signal m_current_config : std_logic_vector (2 downto 0) := "000"; --( range , coding , channel)
    signal m_next_config : std_logic_vector (2 downto 0) := "000";
    signal fall_edge_number : natural range 0 to 31 := 0;
    signal m_Dout_Serial : std_logic := '0';
begin

    process (i_sclk, i_cs)
    begin
        if i_cs = '0' then
            case CurrentState is
                when S0 =>
                    CurrentState <= S1;
                    m_Dout_Serial <= '0';
                    fall_edge_number <= 0;
                    m_next_config <= (i_range, '0', i_a0);

                    case m_current_config is
                        when "000" => m_Dout(15 downto 1) <= m_current_config(2) & m_current_config(0) & channel_bit & std_logic_vector(
                            to_unsigned(adc_channel1_mv * 4095/adc_vref_mv, 12));
                        when "010" => m_Dout(15 downto 1) <= m_current_config(2) & m_current_config(0) & channel_bit & std_logic_vector(
                            to_signed((adc_channel1_mv) * 4095/adc_vref_mv, 12));
                        when "100" => m_Dout(15 downto 1) <= m_current_config(2) & m_current_config(0) & channel_bit & std_logic_vector(
                            to_unsigned(adc_channel1_mv * 4095/adc_vref_mv/2, 12));
                        when "110" => m_Dout(15 downto 1) <= m_current_config(2) & m_current_config(0) & channel_bit & std_logic_vector(
                            to_signed(adc_channel1_mv * 4095/adc_vref_mv, 12));

                        when "001" => m_Dout(15 downto 1) <= m_current_config(2) & m_current_config(0) & channel_bit & std_logic_vector(
                            to_unsigned(adc_channel2_mv * 4095/adc_vref_mv, 12));
                        when "011" => m_Dout(15 downto 1) <= m_current_config(2) & m_current_config(0) & channel_bit & std_logic_vector(
                            to_signed((adc_channel2_mv) * 4095/adc_vref_mv, 12));
                        when "101" => m_Dout(15 downto 1) <= m_current_config(2) & m_current_config(0) & channel_bit & std_logic_vector(
                            to_unsigned(adc_channel2_mv * 4095/adc_vref_mv/2, 12));
                        when "111" => m_Dout(15 downto 1) <= m_current_config(2) & m_current_config(0) & channel_bit & std_logic_vector(
                            to_signed(adc_channel2_mv * 4095/adc_vref_mv, 12));
                        when others => m_Dout(15 downto 1) <= (others => '0');
                    end case;

                when S1 => -- fall edge
                    if falling_edge(i_sclk) then
                        fall_edge_number <= fall_edge_number + 1;
                        m_Dout_Serial <= m_Dout(15 - fall_edge_number);

                        if fall_edge_number = 15 then
                            m_Dout(15 downto 1) <= i_Dout(15 downto 1);
                            fall_edge_number <= 0;
                            m_current_config <= m_next_config;
                        elsif fall_edge_number = 7 then
                            m_next_config(1) <= i_range;
                        end if;
                    end if;
                when others => CurrentState <= S0;
            end case;
        else
            CurrentState <= S0;
        end if;
    end process;

    o_Dout_Serial <= 'Z' when i_cs = '1' else
        m_Dout_Serial;

    m_Dout(0) <= m_Dout(1);
    o_Dout <= m_Dout;

end architecture;
