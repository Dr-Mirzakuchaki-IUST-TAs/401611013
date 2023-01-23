library ieee;
use ieee.std_logic_1164.all;
entity tb2 is
end tb2;

architecture behavior of tb2 is

   -- Component Declaration for the Unit Under Test (UUT)

   component ad7866_driver
      port (
         i_Dout_A : in std_logic;
         i_Dout_B : in std_logic;
         o_sclk : out std_logic;
         o_range : out std_logic;
         o_a0 : out std_logic;
         o_cs : out std_logic;
         i_clk : in std_logic;
         i_reset : in std_logic;
         o_Dout_A : out std_logic_vector(11 downto 0);
         o_Dout_B : out std_logic_vector(11 downto 0);
         o_channel : out std_logic;
         o_datavalid : out std_logic
      );
   end component;
   --Inputs
   signal Dout_A : std_logic;
   signal Dout_B : std_logic;
   signal i_clk : std_logic := '0';
   signal i_reset : std_logic := '0';

   --Outputs
   signal o_sclk : std_logic;
   signal o_range : std_logic;
   signal o_a0 : std_logic;
   signal o_cs : std_logic;
   signal o_Dout_A : std_logic_vector(11 downto 0);
   signal o_Dout_B : std_logic_vector(11 downto 0);
   signal o_channel : std_logic;
   signal o_datavalid : std_logic;

   -- Clock period definitions
   constant i_clk_period : time := 50 ns;

begin

   -- Instantiate the Unit Under Test (UUT)
   driver : ad7866_driver port map(
      i_Dout_A => Dout_A,
      i_Dout_B => Dout_B,
      o_sclk => o_sclk,
      o_range => o_range,
      o_a0 => o_a0,
      o_cs => o_cs,

      i_clk => i_clk,
      i_reset => i_reset,
      o_Dout_A => o_Dout_A,
      o_Dout_B => o_Dout_B,
      o_channel => o_channel,
      o_datavalid => o_datavalid
   );

   adc : entity work.AD7866_model port map (
      o_Dout_A => Dout_A,
      o_Dout_B => Dout_B,
      i_sclk => o_sclk,
      i_range => o_range,
      i_a0 => o_a0,
      i_cs => o_cs
      );

   i_clk <= not i_clk after i_clk_period/2;
   -- Stimulus process
   stim_proc : process
   begin
      wait for 50 ns;

      i_reset <= '1';
      wait;

   end process;

end;