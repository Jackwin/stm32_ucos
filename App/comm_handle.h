/******************** (C) COPYRIGHT 2014 YIYA ********************
* File Name          : comm_handle.h
* Author             : yiya team
* Version            : V0.1
* Date               : 11/20/2014
* Description        : This file contains all the functions prototypes for the
*                      control_main firmware library.
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __COMM_HANDLE_H
#define __COMM_HANDLE_H
#include "stm32f10x_it.h" 
#include "control_comm.h"
/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* GPIO Pin sources ----------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
extern void P_Comm3_Handle(void);
extern void P_Comm2_Handle(void);
extern void P_Comm1_Handle(void);

// Add by chunjie 2018-4-1

//Modbus��վ����״̬�궨��
#define USERPARCHECKOK                ((u16)0x0001)//�û�������ȷ
#define CFGCHECKOK                    ((u16)0x0002)//�ãƣǲ�����ȷ
#define FRAMERECECOMPL             		((u16)0x0004)//�������
#define FRAMERECECRCOK                ((u16)0x0008)//������ɣ��������
#define FRAMERECETIMEOUT             	((u16)0x0010)//M��վ�Խ��յ����ݴ������
#define DATADEALCOMPL             		((u16)0x0020)//M��վ�Դ�վ���ݴ������
#define EnableMMasterPOLL						  ((u16)0x0040)//ʹ����վ��д����
#define DATAUPDATA										((u16)0x0080)//��ȡ�����Ѿ�����

#define PLCOUTPUTFALG									((u16)0x0100)//PLC���������
#define MMWRITEFAULT	                ((u16)0x0200)//modbusִ��д����ʧ��

//Modbus��д��վ��Ӧ״̬�궨�� low 4 bit
#define READRESPONSECRCERR       ((u8)0x01)//��վ��ӦCRCerr
#define READRESPONSETIMEOUT      ((u8)0x02)//��վ��Ӧ��ʱ
//Modbusд�����,high 4 bit ��վ��Ӧ״̬
#define WRITERESPONSECRCERR      ((u8)0x10)//��վ��ӦCRCerr
#define WRITERESPONSETIMEOUT     ((u8)0x20)//��վ��Ӧ��ʱ

typedef struct
{
	u16  Status;
	u16  ConfigStauts;

	u8  T10msFlag;  
	u8  T50msFlag;    //��ʱʱ�䵽��־
	u8  T250msFlag;    //��ʱʱ�䵽��־
	u8  T500msFlag;    //��ʱʱ�䵽��־
	
	u8  T100msTXDCounter;     //��ʱ100ms������
  u8  T100msTXDFlag;        //��ʱ100ms������
	u8  SendFrameFlag;
  u8  T100msRXDCounter;     //��ʱ100ms������
	u8  T100msRXDFlag;        //��ʱ100ms������
	u8  ReceiveFrameFlag;
	
	u8  TXDLEDTrigoneFlag;
	u8  RXDLEDTrigoneFlag;
	
	u8  OFFTXDLEDCounter;
	u8  OFFTXDLEDFlag;
	u8  OFFRXDLEDCounter;
	u8  OFFRXDLEDFlag;
  
    u8   LedDispalyTime;
	
	u8  T10msCounter;     //��ʱ50ms������
	u8  T50msCounter;     //��ʱ50ms������
	u8  T250msCounter;     //��ʱ50ms������
	u8  T500msCounter;     //��ʱ500ms������
	
	u8   SendDataBuf[255]; //���ķ��ͻ�����
	//COMM_DATA SendDataBuf;
	u8   ReceDataBuf[255]; //���Ľ��ջ�����
	u8   SendbyteCount; //���ķ��ͻ�����
	u8   RecebyteCount; //���Ľ��ջ�����
	u8   *ReceBufPtr;		//���ջ�����ָ��
	u8	  *SendBufPtr;	    //���ͻ�����ָ��
	u8   ModbusAdd;		//��վ��ַ��������վ����ʱ�����ڽ���ʱ��վ�ж�
	    
}MODBUS_MASTER_STRUCT;

typedef struct
{
	u8   Funcode;       //������
	u8   ID;            //�豸��//ID�޸�
	u8   Status;         //��վ״̬
	
	u8   ReadDPaddAdd;
	u8   ReadDPaddLen;

	u8   WriteConfigAdd;
	u8   WriteConfigLen;
	
	u16  ReadRegAdd;	   //����������ʼ��ַ
	u16  ReadRegLen;	   //�����ݳ���
	u16  WriteRegAdd;	 //д��������ʼ��ַ
	u16  WriteRegLen;	 //д���ݳ���
		
	u8   RevceBuf[200];
    u8   PLCoutput[200];
	u8   ModbusWrite[200];
	
	u16  Moisture;
	u16  Temperature;
	u16  MoistureADC;
	u16  DeviceFlagFirst;
	u16  DeviceFlagSecond;
	
}MODBUS_SLAVER_STRUCT;

#endif /* __comm_handle_H */

/******************* (C) COPYRIGHT YIYA TEAM *****END OF FILE****/
