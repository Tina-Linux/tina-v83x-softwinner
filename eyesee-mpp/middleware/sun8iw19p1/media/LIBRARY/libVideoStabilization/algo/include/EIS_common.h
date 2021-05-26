#ifndef _EISE_COMMON_H_
#define _EISE_COMMON_H_

#define MAX_SCALAR_CHNL     3        // scalar���·��

#ifndef PLANE_YUV
#define YUV420		0
#define YVU420		1
#define YUV420P		2
#define YUV422		4
#define YVU422		5
#define YUV422P		6
#endif

/*
typedef enum _PLANE_YUV_{

	YUV420 = 0x0001,

	YVU420 = 0x0002,

	YUV420P = 0x0003,

	YUV422 = 0x0004,

	YVU422 = 0x0005,

	YUV422P = 0x0006

}PLANE_YUV;
*/

// ��ǰ�汾��
#define EISE_MAJOR_VER   	1         // ���汾�ţ����63
#define EISE_SUB_VER         0         // �Ӱ汾�ţ����31
#define EISE_REV_VER         0         // �����汾�ţ����31

// �汾����
#define EISE_VER_YEAR		18
#define EISE_VER_MONTH      10
#define EISE_VER_DAY		29

// mem tab
#define EISE_MTAB_NUM        2

// returning Flag
#define LIB_S_OK                    0x00		//
#define LIB_S_FAIL                  0x80000001	//  ��������
#define LIB_E_PARA_NULL             0x80000002	//  ����ָ��Ϊ��
#define LIB_E_MEM_NULL              0x80000003  //
#define LIB_E_MEM_OVER              0x80000004  //  �ڴ����ʧ��
#define LIB_E_PARA_KEY              0x80000005  //
#define LIB_E_PARA_VAL              0x80000006  //  �����������
#define LIB_E_MEM_ALIGN             0x80000007
#define LIB_E_DATA_FORMAT           0x80000008
#define LIB_E_IRQ_TIME_OUT          0x80000009  //  Ӳ������ʱ
#define LIB_E_LUT_HIGHT_TOO_SMALL   0x8000000A
#define LIB_E_LUT_OUT_OF_RANGE      0x8000000B
#define LIB_E_ROIP_OVER          	0x8000000C  //  ROIP���
#define LIB_E_BUFFER_NOT_ENOUGH		0x8000000D  //EIS����Buffer����

#define EN_ERR_EFUSE_ERROR 			25			//ģ���δ����

/**�ڴ���뷽ʽ**/
typedef enum _EISE_MEM_ALIGNMENT_
{
	EISE_MEM_ALIGN_4BYTE    = 4,
	EISE_MEM_ALIGN_8BYTE    = 8,
	EISE_MEM_ALIGN_16BYTE   = 16,
	EISE_MEM_ALIGN_32BYTE   = 32,
	EISE_MEM_ALIGN_64BYTE   = 64,
	EISE_MEM_ALIGN_128BYTE  = 128,
	EISE_MEM_ALIGN_256BYTE  = 256,
	EISE_MEM_ALIGN_512BYTE  = 512,
	EISE_MEM_ALIGN_1024BYTE = 1024
}EISE_MEM_ALIGNMENT;

/** �ڴ����ͱ�־**/
typedef enum _EISE_MEM_ATTRS_
{
	EISE_MEM_SCRATCH,                                // �ɸ���
	EISE_MEM_PERSIST                                 // ���ɸ���
} EISE_MEM_ATTRS;

typedef enum _EISE_MEM_SPACE_
{
	EISE_MEM_EXTER_CACHED_DATA,                   // �ⲿ��Cache�洢��
    EISE_MEM_EXTER_UNCACHED_DATA,                 // �ⲿ����Cache�洢��
    EISE_MEM_INTER_DATA,                          // �ڲ��洢��
} EISE_MEM_SPACE;


// ��ȡ��������
typedef enum _EISE_GET_CFG_TYPE_
{
	EISE_GET_CFG_SINGLE_PARAM    =    0x0001,        // ��������
	EISE_GET_CFG_VERSION         =    0x0002         // �汾��Ϣ
} EISE_GET_CFG_TYPE;

#if 0
/*��ַ�ṹ��*/
typedef struct _myAddr_
{
	void* 	phy_Addr;
	void* 	mmu_Addr;
	void* 	ion_handle; 	// handle to the ion heap
	int 	fd; 			// file to the vsual address
	unsigned int length;
}myAddr;
#endif

/*****************************************************************************
* �㷨�ⵥһ���ò����ṹ��
* index                ��ֵ����, ��д AVM_SINGLE_PARAM_KEY ��������
* val_int              ���Ͳ��������Ҫ���õĲ����Ǹ����ͣ����������д
* val_float            �����Ͳ��������Ҫ���õĲ��������ͣ����������д
******************************************************************************/
typedef struct _EISE_SINGLE_PARAM_
{
	int                      index;
	int                      val_int;
	float                    val_float;
} EISE_SINGLE_PARAM;

typedef void* EISE_HANDLE;


#endif

