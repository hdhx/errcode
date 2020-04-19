#include "err.h"

namespace ec
{
	enum module_num
	{
		E_MODULE_START = 0,//开始
		E_MODULE_TEST1,
		E_MODULE_END, //结束
	};

	char* module_name[] = {
		"未知模块",
		"测试模块",
		"未知模块",
	};

	namespace N_MODULE_TEST1
	{
		enum {};
		inline std::string desc(unsigned int rt);
	}
	
	inline std::string Desc(unsigned int rt)
	{
		unsigned int module_num = ec::getModuleNum(rt);
		unsigned int err_num = getErrNum(rt);
		
		switch(module_num)
		{
			case E_MODULE_TEST1:
				return std::string(module_name[module_num]) + "." + N_MODULE_TEST1::desc(err_num);
			default:
				return "未知模块";
		}
	}
}
