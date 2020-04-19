namespace ec
{
	/*
	��ǰ32λ����1λ��ʾ�ɹ���ʧ�ܡ�0 or 1��
	��2λ����9λ��ʾģ�飬����ʾ255
	��10λ����32λ��ʾ�������ͣ�����ʾ8388607
	*/
	unsigned int err;

	/*
		����ɹ��Ĳ���
	*/
	inline unsigned int initSuccess(unsigned int input)
	{
		return input | (1 << 31);
	}

	/*
		�ж��Ƿ�ɹ�
	*/
	inline bool isSuccess(unsigned int input)
	{
		return (input & (1 << 31)) != 0;
	}

	/*
		����ʧ�ܵĲ���
	*/
	inline unsigned int initFail(unsigned int input)
	{
		return input & (~(1 << 31));
	}

	/*
		�ж��Ƿ�ʧ��
	*/
	inline bool isFail(unsigned int input)
	{
		return !isSuccess(input);
	}

	/*
		ȡ��ģ���ֵ
	*/
	inline unsigned int getModuleNum(unsigned int input)
	{
		return ((input << 1) >> (32 - 8));
	}

	/*
		����ģ���ֵ
	*/
	inline unsigned int setModuleNum(unsigned int input, unsigned int modulenum)
	{
		return input | ((modulenum << (32 - 8)) >> 1);
	}

	/*
		���ô������ֵ
	*/
	inline unsigned int setErrNum(unsigned int input, unsigned int errnum)
	{
		return (input | ((errnum << 1 + 8) >> (1 + 8)));
	}

	/*
		ȡ���������ֵ
	*/
	inline unsigned int getErrNum(unsigned int input)
	{
		return ((input << (1 + 8)) >> (1 + 8));
	}
}

