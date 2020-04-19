namespace ec
{
	/*
	用前32位，第1位表示成功或失败【0 or 1】
	第2位到第9位表示模块，最多表示255
	第10位到第32位表示错误类型，最多表示8388607
	*/
	unsigned int err;

	/*
		构造成功的参数
	*/
	inline unsigned int initSuccess(unsigned int input)
	{
		return input | (1 << 31);
	}

	/*
		判断是否成功
	*/
	inline bool isSuccess(unsigned int input)
	{
		return (input & (1 << 31)) != 0;
	}

	/*
		构造失败的参数
	*/
	inline unsigned int initFail(unsigned int input)
	{
		return input & (~(1 << 31));
	}

	/*
		判断是否失败
	*/
	inline bool isFail(unsigned int input)
	{
		return !isSuccess(input);
	}

	/*
		取出模块的值
	*/
	inline unsigned int getModuleNum(unsigned int input)
	{
		return ((input << 1) >> (32 - 8));
	}

	/*
		设置模块的值
	*/
	inline unsigned int setModuleNum(unsigned int input, unsigned int modulenum)
	{
		return input | ((modulenum << (32 - 8)) >> 1);
	}

	/*
		设置错误码的值
	*/
	inline unsigned int setErrNum(unsigned int input, unsigned int errnum)
	{
		return (input | ((errnum << 1 + 8) >> (1 + 8)));
	}

	/*
		取出错误码的值
	*/
	inline unsigned int getErrNum(unsigned int input)
	{
		return ((input << (1 + 8)) >> (1 + 8));
	}
}

