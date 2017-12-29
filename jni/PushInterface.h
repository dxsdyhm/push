#ifndef  _PUSH_INTERFACE_H_
#define _PUSH_INTERFACE_H_

#if defined(__cplusplus)
extern "C" {
#endif

	/*!
	\brief ������(�ݶ�,֮�󻹻��޸�)
	*/
	enum errorCode  
	{
		success = 0,                                          //!<�ɹ�
		error_param = 1,								      //!<��������
		create_class_fail = 2,						      //!<������ʵ��ʧ��
		cannot_open_inifile = 3,					      //!<�޷������������ļ�
		map_init_fail = 4							          //!<���������ļ���ȡʧ��
	};

	/*!
	\brief �ص�����
	*/
	typedef void(*CallBackFunc)(const char*);

	/*!
	\brief ��ʼ������
	\param func  �ص�����ָ��
	\param �ɹ�����0��ʧ�ܷ��ض�ӦErrorCode
	*/
	int cpush_init(CallBackFunc func);
	/*!
	\brief ����ʼ������
	*/
	void cpush_uninit();

#if defined(__cplusplus)
}
#endif

#endif // ! _PUSH_INTERFACE_H_
