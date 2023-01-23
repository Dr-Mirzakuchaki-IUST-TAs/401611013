library IEEE;
use IEEE.STD_LOGIC_1164.all;
entity ad7866_driver is
    port (
        -- to adc
        i_Dout_A, i_Dout_B : in std_logic;
        o_sclk, o_range, o_a0, o_cs : out std_logic; 

        --
        i_clk, i_reset : in std_logic;
        o_Dout_A, o_Dout_B : out std_logic_vector (11 downto 0);
        o_channel, o_datavalid : out std_logic -- datavalid : active low , channel = '1' : channel 1 else channel 2

    );

end ad7866_driver;

architecture Behavioral of ad7866_driver is
    type State_Type is (S0, S1, S2, S3);
    signal CurrentState : State_Type := S0;
    signal r_channel : std_logic := '0';
    signal r_cs : std_logic := '1';

    signal r_Dout_A, r_Dout_B : std_logic_vector (15 downto 0);
    signal r_index : natural range 0 to 15 := 0;
begin

    o_range <= '0';
    o_sclk <= i_clk when r_cs ='0' else '1';
    o_a0 <= r_channel;
    o_cs<=r_cs; -- only due to defualt value
    process (i_clk, i_reset)
    begin
        if rising_Edge(i_clk) then
            if i_reset = '0' then
                CurrentState <= S0;
                r_cs <= '1';
                o_Dout_A <= (others => 'Z');
                o_Dout_B <= (others => 'Z');
                o_datavalid <= '1';
            else
                case CurrentState is
                    when S0 =>  -- start 
                        r_cs <= '0';
                        r_index <= 0;
                        CurrentState <= S1;
                    when S1 => -- reading
                        if r_index = 15 then
                            CurrentState <= S2;
                        else
                            r_index <= r_index + 1;
                            r_Dout_A(15-r_index) <= i_Dout_A;
                            r_Dout_B(15-r_index) <= i_Dout_B;
                        end if;
                    when S2 =>  -- extraction
                        r_cs <= '1';
                        o_Dout_A <= r_Dout_A(12 downto 1);
                        o_Dout_B <= r_Dout_B(12 downto 1);
                        CurrentState <= S3;
                        o_channel <= r_Dout_A(14);
                        o_datavalid <= '0';
                    when S3 => -- wait 
                        CurrentState <= S0;
                        r_channel <= not r_channel; -- change channel 
                end case;
            end if;

        end if;
    end process;

end Behavioral;