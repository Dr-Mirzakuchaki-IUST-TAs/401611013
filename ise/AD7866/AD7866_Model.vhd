library IEEE;
use IEEE.STD_LOGIC_1164.all;
use ieee.numeric_std.all;

entity AD7866_model is
 

    port (
        o_Dout_A,o_Dout_B : out std_logic;
        i_sclk, i_range, i_a0, i_cs : in std_logic
    );
end entity;

architecture Behavioral of AD7866_model is
    signal signal_Dout_a :std_logic_vector (15 downto 0);
    signal signal_Dout_b :std_logic_vector (15 downto 0);
begin

   adcA :entity work.AD7866_model_single(Behavioral) generic map (4095,2000,1000,'0') 
   port map (o_Dout_A,signal_Dout_a,signal_Dout_b,i_sclk, i_range, i_a0, i_cs ); 

   adcb :entity work.AD7866_model_single(Behavioral) generic map (4095,3000,40,'0') 
   port map (o_Dout_B,signal_Dout_b,signal_Dout_a,i_sclk, i_range, i_a0, i_cs ); 

end architecture;