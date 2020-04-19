#include "err.h"

namespace ec
{
	enum module_num
	{
		E_MODULE_START = 0,//��ʼ
		E_MODULE_TEST1,
		E_MODULE_END, //����
	};

	char* module_name[] = {
		"δ֪ģ��",
		"����ģ��",
		"δ֪ģ��",
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
				return "δ֪ģ��";
		}
	}
}
