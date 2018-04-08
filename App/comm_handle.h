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

//Modbus主站工作状态宏定义
#define USERPARCHECKOK                ((u16)0x0001)//用户参数正确
#define CFGCHECKOK                    ((u16)0x0002)//ＣＦＧ参数正确
#define FRAMERECECOMPL             		((u16)0x0004)//接收完成
#define FRAMERECECRCOK                ((u16)0x0008)//接收完成，分析结果
#define FRAMERECETIMEOUT             	((u16)0x0010)//M主站对接收的数据处理完成
#define DATADEALCOMPL             		((u16)0x0020)//M主站对从站数据处理完成
#define EnableMMasterPOLL						  ((u16)0x0040)//使能主站读写数据
#define DATAUPDATA										((u16)0x0080)//读取数据已经更新

#define PLCOUTPUTFALG									((u16)0x0100)//PLC有数据输出
#define MMWRITEFAULT	                ((u16)0x0200)//modbus执行写命令失败

//Modbus读写从站响应状态宏定义 low 4 bit
#define READRESPONSECRCERR       ((u8)0x01)//从站响应CRCerr
#define READRESPONSETIMEOUT      ((u8)0x02)//从站响应超时
//Modbus写命令后,high 4 bit 从站响应状态
#define WRITERESPONSECRCERR      ((u8)0x10)//从站响应CRCerr
#define WRITERESPONSETIMEOUT     ((u8)0x20)//从站响应超时

typedef struct
{
	u16  Status;
	u16  ConfigStauts;

	u8  T10msFlag;  
	u8  T50msFlag;    //定时时间到标志
	u8  T250msFlag;    //定时时间到标志
	u8  T500msFlag;    //定时时间到标志
	
	u8  T100msTXDCounter;     //定时100ms计数器
  u8  T100msTXDFlag;        //定时100ms计数器
	u8  SendFrameFlag;
  u8  T100msRXDCounter;     //定时100ms计数器
	u8  T100msRXDFlag;        //定时100ms计数器
	u8  ReceiveFrameFlag;
	
	u8  TXDLEDTrigoneFlag;
	u8  RXDLEDTrigoneFlag;
	
	u8  OFFTXDLEDCounter;
	u8  OFFTXDLEDFlag;
	u8  OFFRXDLEDCounter;
	u8  OFFRXDLEDFlag;
  
    u8   LedDispalyTime;
	
	u8  T10msCounter;     //定时50ms计数器
	u8  T50msCounter;     //定时50ms计数器
	u8  T250msCounter;     //定时50ms计数器
	u8  T500msCounter;     //定时500ms计数器
	
	u8   SendDataBuf[255]; //报文发送缓冲区
	//COMM_DATA SendDataBuf;
	u8   ReceDataBuf[255]; //报文接收缓冲区
	u8   SendbyteCount; //报文发送缓冲区
	u8   RecebyteCount; //报文接收缓冲区
	u8   *ReceBufPtr;		//接收缓冲区指针
	u8	  *SendBufPtr;	    //发送缓冲区指针
	u8   ModbusAdd;		//从站地址，用于主站发送时，用于接收时从站判断
	    
}MODBUS_MASTER_STRUCT;

typedef struct
{
	u8   Funcode;       //功能码
	u8   ID;            //设备地//ID修改
	u8   Status;         //从站状态
	
	u8   ReadDPaddAdd;
	u8   ReadDPaddLen;

	u8   WriteConfigAdd;
	u8   WriteConfigLen;
	
	u16  ReadRegAdd;	   //读数据起起始地址
	u16  ReadRegLen;	   //读数据长度
	u16  WriteRegAdd;	 //写数据起起始地址
	u16  WriteRegLen;	 //写数据长度
		
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
