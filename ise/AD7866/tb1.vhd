
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

 
ENTITY tb1 IS
END tb1;
 
ARCHITECTURE behavior OF tb1 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT AD7866_model_single
    PORT(
         o_Dout_Serial : OUT  std_logic;
         o_Dout : OUT  std_logic_vector(15 downto 0);
         i_Dout : IN  std_logic_vector(15 downto 0);
         i_sclk : IN  std_logic;
         i_range : IN  std_logic;
         i_a0 : IN  std_logic;
         i_cs : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal i_Dout : std_logic_vector(15 downto 0) := "1010101010101011";
   signal i_sclk : std_logic := '0';
   signal i_range : std_logic := '0';
   signal i_a0 : std_logic := '1';
   signal i_cs : std_logic := '1';

 	--Outputs
   signal o_Dout_Serial : std_logic;
   signal o_Dout : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant i_sclk_period : time := 50 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: AD7866_model_single PORT MAP (
          o_Dout_Serial => o_Dout_Serial,
          o_Dout => o_Dout,
          i_Dout => i_Dout,
          i_sclk => i_sclk,
          i_range => i_range,
          i_a0 => i_a0,
          i_cs => i_cs
        );

   -- Clock process definitions
   i_sclk_process :process
   begin
		i_sclk <= '0';
		wait for i_sclk_period/2;
		i_sclk <= '1';
		wait for i_sclk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 37.5 ns;	
      i_cs<='0';
      wait for 16*50 ns;
      i_cs<='1';

      -- insert stimulus here 
   end process;

END;
