namespace ec
{
	namespace N_MODULE_TEST1
	{
		enum {
				err_start = 0,
				err_num1,
				err_num2,
				err_end,
			};

		inline std::string desc(unsigned int rt)
		{
			if ((rt <= err_start) || (rt >= err_end))
				return "δ֪";
			
			switch(rt)
			{
				case err_num1:
					return " test 1";				
				case err_num2:
					return " test 2";
				default:
					return "δ֪";
			}
		}
	}
}
