/******************** (C) COPYRIGHT 2014 YIYA ********************
* File Name          : control_global.h
* Author             : yiya team
* Version            : V0.1
* Date               : 11/20/2014
* Description        : This file contains all the functions prototypes for the
*                      control_main firmware library.
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __CONTROL_GLOBAL_H
#define __CONTROL_GLOBAL_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x_it.h" 
/* Exported types ------------------------------------------------------------*/
//extern u16 DEBUG_ERROR;
/* Exported constants --------------------------------------------------------*/
#define SYSSTATUS_BASE 										0U
#define SYSSTATUS_INTERVAL							  1U
#define SYS_RUNORSTOP_BASE								(SYSSTATUS_BASE + 0U)
#define SYS_NUMBER_BASE										(SYSSTATUS_BASE + 1U)
#define TRANSVERT1_ERROR_BASE							(SYSSTATUS_BASE + 2U)
#define TRANSVERT2_ERROR_BASE							(SYSSTATUS_BASE + 3U)
#define TRANSVERT3_ERROR_BASE							(SYSSTATUS_BASE + 4U)
#define TRANSVERT4_ERROR_BASE							(SYSSTATUS_BASE + 5U)
#define FRE_IMBALANCE_ERROR_BASE 					(SYSSTATUS_BASE + 6U)
#define	DIF_PRESSURE_ERROR_BASE						(SYSSTATUS_BASE + 7U)
#define	SENSOR_ERROR_BASE									(SYSSTATUS_BASE + 8U)
#define PARAMETER_ERROR_BASE							(SYSSTATUS_BASE + 9U)

#define ADG1611_ACTIVE_LEVEL							(SYSSTATUS_BASE + 10U)

#define PARAMETER_SET_BASE						    100U
#define PARAMETER_SET_INTERVAL					  5U
//压力传感器1参数
#define PRESSURE_SENSOR1_TYPE_BASE				(PARAMETER_SET_BASE + 1U)
#define FIR_WATERPRETRANS_RANG_MAX_BASE		(PARAMETER_SET_BASE + 2U)//gain:1000
#define FIR_WATERPRETRANS_RANG_MIN_BASE		(PARAMETER_SET_BASE + 3U)//gain:1000
#define FIR_WATERPRETRANS_ADJUST_BASE			(PARAMETER_SET_BASE + 4U)//gain:1000
#define FIR_WATERPRETRANS_GAIN_BASE				(PARAMETER_SET_BASE + 5U)//gain:1000
//压力传感器2参数
#define PRESSURE_SENSOR2_TYPE_BASE				(PARAMETER_SET_BASE + 6U)
#define SEC_WATERPRETRANS_RANG_MAX_BASE		(PARAMETER_SET_BASE + 7U)
#define SEC_WATERPRETRANS_RANG_MIN_BASE		(PARAMETER_SET_BASE + 8U)
#define SEC_WATERPRETRANS_ADJUST_BASE			(PARAMETER_SET_BASE + 9U)
#define SEC_WATERPRETRANS_GAIN_BASE				(PARAMETER_SET_BASE + 10U)
//压力传感器3参数
#define PRESSURE_SENSOR3_TYPE_BASE				(PARAMETER_SET_BASE + 11U)
#define THI_WATERPRETRANS_RANG_MAX_BASE		(PARAMETER_SET_BASE + 12U)
#define THI_WATERPRETRANS_RANG_MIN_BASE		(PARAMETER_SET_BASE + 13U)
#define THI_WATERPRETRANS_ADJUST_BASE			(PARAMETER_SET_BASE + 14U)
#define THI_WATERPRETRANS_GAIN_BASE				(PARAMETER_SET_BASE + 15U)
//压力传感器4参数
#define PRESSURE_SENSOR4_TYPE_BASE				(PARAMETER_SET_BASE + 16U)
#define FOU_WATERPRETRANS_RANG_MAX_BASE		(PARAMETER_SET_BASE + 17U)
#define FOU_WATERPRETRANS_RANG_MIN_BASE		(PARAMETER_SET_BASE + 18U)
#define FOU_WATERPRETRANS_ADJUST_BASE			(PARAMETER_SET_BASE + 19U)
#define FOU_WATERPRETRANS_GAIN_BASE				(PARAMETER_SET_BASE + 20U)
//温度传感器1参数
#define TEMPERATURE_SENSOR1_TYPE_BASE			(PARAMETER_SET_BASE + 21U)
#define FIR_WATERTEMTRANS_RANG_MAX_BASE		(PARAMETER_SET_BASE + 22U)//gain:100
#define FIR_WATERTEMTRANS_RANG_MIN_BASE		(PARAMETER_SET_BASE + 23U)//gain:100
#define FIR_WATERTEMTRANS_ADJUST_BASE			(PARAMETER_SET_BASE + 24U)//gain:100
#define FIR_WATERTEMTRANS_GAIN_BASE				(PARAMETER_SET_BASE + 25U)//gain:100
//温度传感器2参数
#define TEMPERATURE_SENSOR2_TYPE_BASE			(PARAMETER_SET_BASE + 26U)
#define SEC_WATERTEMTRANS_RANG_MAX_BASE		(PARAMETER_SET_BASE + 27U)
#define SEC_WATERTEMTRANS_RANG_MIN_BASE		(PARAMETER_SET_BASE + 28U)
#define SEC_WATERTEMTRANS_ADJUST_BASE			(PARAMETER_SET_BASE + 29U)
#define SEC_WATERTEMTRANS_GAIN_BASE				(PARAMETER_SET_BASE + 30U)
//温度传感器3参数
#define TEMPERATURE_SENSOR3_TYPE_BASE			(PARAMETER_SET_BASE + 31U)
#define THI_WATERTEMTRANS_RANG_MAX_BASE		(PARAMETER_SET_BASE + 32U)
#define THI_WATERTEMTRANS_RANG_MIN_BASE		(PARAMETER_SET_BASE + 33U)
#define THI_WATERTEMTRANS_ADJUST_BASE			(PARAMETER_SET_BASE + 34U)
#define THI_WATERTEMTRANS_GAIN_BASE				(PARAMETER_SET_BASE + 35U)
//温度传感器4参数
#define TEMPERATURE_SENSOR4_TYPE_BASE			(PARAMETER_SET_BASE + 36U)
#define FOU_WATERTEMTRANS_RANG_MAX_BASE		(PARAMETER_SET_BASE + 37U)
#define FOU_WATERTEMTRANS_RANG_MIN_BASE		(PARAMETER_SET_BASE + 38U)
#define FOU_WATERTEMTRANS_ADJUST_BASE			(PARAMETER_SET_BASE + 39U)
#define FOU_WATERTEMTRANS_GAIN_BASE				(PARAMETER_SET_BASE + 40U)
//频率传感器1参数
#define FREQUENCY_SENSOR1_TYPE_BASE				(PARAMETER_SET_BASE + 41U)
#define FIR_WATERFRETRANS_RANG_MAX_BASE		(PARAMETER_SET_BASE + 42U)//gain:100
#define FIR_WATERFRETRANS_RANG_MIN_BASE		(PARAMETER_SET_BASE + 43U)//gain:100
#define FIR_WATERFRETRANS_ADJUST_BASE			(PARAMETER_SET_BASE + 44U)//gain:100
#define FIR_WATERFRETRANS_GAIN_BASE				(PARAMETER_SET_BASE + 45U)//gain:100
//频率传感器2参数
#define FREQUENCY_SENSOR2_TYPE_BASE				(PARAMETER_SET_BASE + 46U)
#define SEC_WATERFRETRANS_RANG_MAX_BASE		(PARAMETER_SET_BASE + 47U)
#define SEC_WATERFRETRANS_RANG_MIN_BASE		(PARAMETER_SET_BASE + 48U)
#define SEC_WATERFRETRANS_ADJUST_BASE			(PARAMETER_SET_BASE + 49U)
#define SEC_WATERFRETRANS_GAIN_BASE				(PARAMETER_SET_BASE + 50U)
//频率传感器3参数
#define FREQUENCY_SENSOR3_TYPE_BASE				(PARAMETER_SET_BASE + 51U)
#define THI_WATERFRETRANS_RANG_MAX_BASE		(PARAMETER_SET_BASE + 52U)
#define THI_WATERFRETRANS_RANG_MIN_BASE		(PARAMETER_SET_BASE + 53U)
#define THI_WATERFRETRANS_ADJUST_BASE			(PARAMETER_SET_BASE + 54U)
#define THI_WATERFRETRANS_GAIN_BASE				(PARAMETER_SET_BASE + 55U)
//频率传感器4参数
#define FREQUENCY_SENSOR4_TYPE_BASE				(PARAMETER_SET_BASE + 56U)
#define FOU_WATERFRETRANS_RANG_MAX_BASE		(PARAMETER_SET_BASE + 57U)
#define FOU_WATERFRETRANS_RANG_MIN_BASE		(PARAMETER_SET_BASE + 58U)
#define FOU_WATERFRETRANS_ADJUST_BASE			(PARAMETER_SET_BASE + 59U)
#define FOU_WATERFRETRANS_GAIN_BASE				(PARAMETER_SET_BASE + 60U)
//调节阀反馈信号1参数
#define VALVE_FEEDBACK1_TYPE_BASE					(PARAMETER_SET_BASE + 61U)
#define FIR_VALVEFB_RANG_MAX_BASE					(PARAMETER_SET_BASE + 62U)
#define FIR_VALVEFB_RANG_MIN_BASE					(PARAMETER_SET_BASE + 63U)
#define FIR_VALVEFB_ADJUST_BASE						(PARAMETER_SET_BASE + 64U)
#define FIR_VALVEFB_GAIN_BASE							(PARAMETER_SET_BASE + 65U)
//调节阀反馈信号2参数
#define VALVE_FEEDBACK2_TYPE_BASE					(PARAMETER_SET_BASE + 66U)
#define SEC_VALVEFB_RANG_MAX_BASE					(PARAMETER_SET_BASE + 67U)
#define SEC_VALVEFB_RANG_MIN_BASE 				(PARAMETER_SET_BASE + 68U)
#define SEC_VALVEFB_ADJUST_BASE						(PARAMETER_SET_BASE + 69U)
#define SEC_VALVEFB_GAIN_BASE							(PARAMETER_SET_BASE + 70U)
//调节阀反馈信号3参数
#define VALVE_FEEDBACK3_TYPE_BASE					(PARAMETER_SET_BASE + 71U)
#define THI_VALVEFB_RANG_MAX_BASE					(PARAMETER_SET_BASE + 72U)
#define THI_VALVEFB_RANG_MIN_BASE 				(PARAMETER_SET_BASE + 73U)
#define THI_VALVEFB_ADJUST_BASE						(PARAMETER_SET_BASE + 74U)
#define THI_VALVEFB_GAIN_BASE							(PARAMETER_SET_BASE + 75U)
//调节阀反馈信号4参数
#define VALVE_FEEDBACK4_TYPE_BASE					(PARAMETER_SET_BASE + 76U)
#define FOU_VALVEFB_RANG_MAX_BASE 				(PARAMETER_SET_BASE + 77U)
#define FOU_VALVEFB_RANG_MIN_BASE					(PARAMETER_SET_BASE + 78U)
#define FOU_VALVEFB_ADJUST_BASE						(PARAMETER_SET_BASE + 79U)
#define FOU_VALVEFB_GAIN_BASE							(PARAMETER_SET_BASE + 80U)
//压差变送输入参数
#define DIF_PRESSURE_TYPE_BASE						(PARAMETER_SET_BASE + 81U)
#define DIF_PRESSURE_RANG_MAX_BASE 				(PARAMETER_SET_BASE + 82U)
#define DIF_PRESSURE_RANG_MIN_BASE				(PARAMETER_SET_BASE + 83U)
#define DIF_PRESSURE_ADJUST_BASE					(PARAMETER_SET_BASE + 84U)
#define DIF_PRESSURE_GAIN_BASE						(PARAMETER_SET_BASE + 85U)
//外温变送输入参数
#define OUT_TEMPERATURE_TYPE_BASE					(PARAMETER_SET_BASE + 86U)
#define OUT_TEMTRANS_RANG_MAX_BASE 				(PARAMETER_SET_BASE + 87U)
#define OUT_TEMTRANS_RANG_MIN_BASE				(PARAMETER_SET_BASE + 88U)
#define OUT_TEMTRANS_ADJUST_BASE					(PARAMETER_SET_BASE + 89U)
#define OUT_TEMTRANS_GAIN_BASE						(PARAMETER_SET_BASE + 90U)

#define OUT1_TYPE_BASE										(PARAMETER_SET_BASE + 91U)
#define OUT2_TYPE_BASE										(PARAMETER_SET_BASE + 92U)
#define OUT3_TYPE_BASE										(PARAMETER_SET_BASE + 93U)
#define OUT4_TYPE_BASE										(PARAMETER_SET_BASE + 94U)
#define AI_GROUP1_TYPE_BASE								(PARAMETER_SET_BASE + 95U)//1--voltage;2--current;3--resist
#define AI_GROUP2_TYPE_BASE								(PARAMETER_SET_BASE + 96U)//1--voltage;2--current

//lc 111117
#define DAC_OUTPUT												(PARAMETER_SET_BASE + 86U)
#define AI_MODE_CH1												(PARAMETER_SET_BASE + 87U) //3--connect Pt resistor
#define AI_MODE_CH2								 				(PARAMETER_SET_BASE + 88U)
#define AI_MODE_CH3												(PARAMETER_SET_BASE + 89U)
#define AI_MODE_CH4												(PARAMETER_SET_BASE + 90U)


#define CURRENT_COLLECT_MODE1							1U //4-20mA
#define CURRENT_COLLECT_MODE2							2U //0-20mA
#define VOLTAGE_COLLECT_MODE1							3U //0-5V
#define VOLTAGE_COLLECT_MODE2							4U	//0-10V

#define FUNCTION_ANALOG_BASE 							200U
#define FUNCTION_ANALOG_INTERVAL				  2U
#define ADC1_ORIGIN_BASE				(FUNCTION_ANALOG_BASE + 0U)
#define ADC2_ORIGIN_BASE				(FUNCTION_ANALOG_BASE + 1U)
#define ADC3_ORIGIN_BASE				(FUNCTION_ANALOG_BASE + 2U)
#define ADC4_ORIGIN_BASE				(FUNCTION_ANALOG_BASE + 3U)
#define ADC5_ORIGIN_BASE				(FUNCTION_ANALOG_BASE + 4U)
#define ADC6_ORIGIN_BASE				(FUNCTION_ANALOG_BASE + 5U)
#define ADC7_ORIGIN_BASE				(FUNCTION_ANALOG_BASE + 6U)
#define ADC8_ORIGIN_BASE				(FUNCTION_ANALOG_BASE + 7U)
#define ADC9_ORIGIN_BASE				(FUNCTION_ANALOG_BASE + 8U)
#define ADC10_ORIGIN_BASE				(FUNCTION_ANALOG_BASE + 9U)
#define ADC11_ORIGIN_BASE				(FUNCTION_ANALOG_BASE + 10U)
#define ADC12_ORIGIN_BASE				(FUNCTION_ANALOG_BASE + 11U)
#define ADC13_ORIGIN_BASE				(FUNCTION_ANALOG_BASE + 12U)
#define ADC14_ORIGIN_BASE				(FUNCTION_ANALOG_BASE + 13U)
#define ADC15_ORIGIN_BASE				(FUNCTION_ANALOG_BASE + 14U)
#define ADC16_ORIGIN_BASE				(FUNCTION_ANALOG_BASE + 15U)

#define ADC1_FINAL_BASE					(FUNCTION_ANALOG_BASE + 16U)//gain:1000
#define ADC2_FINAL_BASE					(FUNCTION_ANALOG_BASE + 17U)
#define ADC3_FINAL_BASE					(FUNCTION_ANALOG_BASE + 18U)
#define ADC4_FINAL_BASE					(FUNCTION_ANALOG_BASE + 19U)
#define ADC5_FINAL_BASE					(FUNCTION_ANALOG_BASE + 20U)
#define ADC6_FINAL_BASE					(FUNCTION_ANALOG_BASE + 21U)
#define ADC7_FINAL_BASE					(FUNCTION_ANALOG_BASE + 22U)
#define ADC8_FINAL_BASE					(FUNCTION_ANALOG_BASE + 23U)
#define ADC9_FINAL_BASE					(FUNCTION_ANALOG_BASE + 24U)
#define ADC10_FINAL_BASE				(FUNCTION_ANALOG_BASE + 25U)
#define ADC11_FINAL_BASE				(FUNCTION_ANALOG_BASE + 26U)
#define ADC12_FINAL_BASE				(FUNCTION_ANALOG_BASE + 27U)
#define ADC13_FINAL_BASE				(FUNCTION_ANALOG_BASE + 28U)
#define ADC14_FINAL_BASE				(FUNCTION_ANALOG_BASE + 29U)
#define ADC15_FINAL_BASE				(FUNCTION_ANALOG_BASE + 30U)
#define ADC16_FINAL_BASE				(FUNCTION_ANALOG_BASE + 31U)

#define DAC1_FINAL_BASE				(FUNCTION_ANALOG_BASE + 32U)//触摸屏程序用的这个
#define DAC2_FINAL_BASE				(FUNCTION_ANALOG_BASE + 33U)
#define DAC3_FINAL_BASE				(FUNCTION_ANALOG_BASE + 34U)
#define DAC4_FINAL_BASE				(FUNCTION_ANALOG_BASE + 35U)

#define DAC1_ORIGIN_BASE					(FUNCTION_ANALOG_BASE + 36U)
#define DAC2_ORIGIN_BASE					(FUNCTION_ANALOG_BASE + 37U)
#define DAC3_ORIGIN_BASE					(FUNCTION_ANALOG_BASE + 38U)
#define DAC4_ORIGIN_BASE					(FUNCTION_ANALOG_BASE + 39U)

#define AO_FEEDBACK1_BASE				(FUNCTION_ANALOG_BASE + 40U)
#define AO_FEEDBACK2_BASE				(FUNCTION_ANALOG_BASE + 41U)
#define AO_FEEDBACK3_BASE				(FUNCTION_ANALOG_BASE + 42U)
#define AO_FEEDBACK4_BASE				(FUNCTION_ANALOG_BASE + 43U)
#define AO_FEEDBACK5_BASE				(FUNCTION_ANALOG_BASE + 44U)
#define AO_FEEDBACK6_BASE				(FUNCTION_ANALOG_BASE + 45U)

#define DAC1_ORIGIN_READ_BASE		(FUNCTION_ANALOG_BASE + 46U)
#define DAC2_ORIGIN_READ_BASE		(FUNCTION_ANALOG_BASE + 47U)
#define DAC3_ORIGIN_READ_BASE		(FUNCTION_ANALOG_BASE + 48U)
#define DAC4_ORIGIN_READ_BASE		(FUNCTION_ANALOG_BASE + 49U)

#define FINAL_OUTDOOR_SET_TEMPERATURE_BASE (FUNCTION_ANALOG_BASE + 50U)

#define FUNCTION_DIGITAL_BASE							300U
#define FUNCTION_DIGITAL_INTERVAL				  1U
#define DO1_DATA_BASE											(FUNCTION_DIGITAL_BASE + 0U)
#define DO2_DATA_BASE											(FUNCTION_DIGITAL_BASE + 1U)
#define DO3_DATA_BASE											(FUNCTION_DIGITAL_BASE + 2U)
#define DO4_DATA_BASE											(FUNCTION_DIGITAL_BASE + 3U)
#define DO5_DATA_BASE											(FUNCTION_DIGITAL_BASE + 4U)
#define DO6_DATA_BASE											(FUNCTION_DIGITAL_BASE + 5U)
#define DO7_DATA_BASE											(FUNCTION_DIGITAL_BASE + 6U)
#define DO8_DATA_BASE											(FUNCTION_DIGITAL_BASE + 7U)
#define DO9_DATA_BASE											(FUNCTION_DIGITAL_BASE + 8U)
#define DO10_DATA_BASE										(FUNCTION_DIGITAL_BASE + 9U)
#define DO11_DATA_BASE										(FUNCTION_DIGITAL_BASE + 10U)
#define DO12_DATA_BASE										(FUNCTION_DIGITAL_BASE + 11U)
#define DO13_DATA_BASE										(FUNCTION_DIGITAL_BASE + 12U)
#define DO14_DATA_BASE										(FUNCTION_DIGITAL_BASE + 13U)
#define DO15_DATA_BASE										(FUNCTION_DIGITAL_BASE + 14U)
#define DO16_DATA_BASE										(FUNCTION_DIGITAL_BASE + 15U)

#define DI1_DATA_BASE											(FUNCTION_DIGITAL_BASE + 16U)
#define DI2_DATA_BASE											(FUNCTION_DIGITAL_BASE + 17U)
#define DI3_DATA_BASE											(FUNCTION_DIGITAL_BASE + 18U)
#define DI4_DATA_BASE											(FUNCTION_DIGITAL_BASE + 19U)
#define DI5_DATA_BASE											(FUNCTION_DIGITAL_BASE + 20U)
#define DI6_DATA_BASE											(FUNCTION_DIGITAL_BASE + 21U)
#define DI7_DATA_BASE											(FUNCTION_DIGITAL_BASE + 22U)
#define DI8_DATA_BASE											(FUNCTION_DIGITAL_BASE + 23U)
#define DI9_DATA_BASE											(FUNCTION_DIGITAL_BASE + 24U)
#define DI10_DATA_BASE										(FUNCTION_DIGITAL_BASE + 25U)
#define DI11_DATA_BASE										(FUNCTION_DIGITAL_BASE + 26U)
#define DI12_DATA_BASE										(FUNCTION_DIGITAL_BASE + 27U)
#define DI13_DATA_BASE										(FUNCTION_DIGITAL_BASE + 28U)
#define DI14_DATA_BASE										(FUNCTION_DIGITAL_BASE + 29U)
#define DI15_DATA_BASE										(FUNCTION_DIGITAL_BASE + 30U)
#define DI16_DATA_BASE										(FUNCTION_DIGITAL_BASE + 31U)

#define DO1_DATA_READ_BASE								(FUNCTION_DIGITAL_BASE + 32U)
#define DO2_DATA_READ_BASE								(FUNCTION_DIGITAL_BASE + 33U)
#define DO3_DATA_READ_BASE								(FUNCTION_DIGITAL_BASE + 34U)
#define DO4_DATA_READ_BASE								(FUNCTION_DIGITAL_BASE + 35U)
#define DO5_DATA_READ_BASE								(FUNCTION_DIGITAL_BASE + 36U)
#define DO6_DATA_READ_BASE								(FUNCTION_DIGITAL_BASE + 37U)
#define DO7_DATA_READ_BASE								(FUNCTION_DIGITAL_BASE + 38U)
#define DO8_DATA_READ_BASE								(FUNCTION_DIGITAL_BASE + 39U)
#define DO9_DATA_READ_BASE								(FUNCTION_DIGITAL_BASE + 40U)
#define DO10_DATA_READ_BASE								(FUNCTION_DIGITAL_BASE + 41U)
#define DO11_DATA_READ_BASE								(FUNCTION_DIGITAL_BASE + 42U)
#define DO12_DATA_READ_BASE								(FUNCTION_DIGITAL_BASE + 43U)
#define DO13_DATA_READ_BASE								(FUNCTION_DIGITAL_BASE + 44U)
#define DO14_DATA_READ_BASE								(FUNCTION_DIGITAL_BASE + 45U)
#define DO15_DATA_READ_BASE								(FUNCTION_DIGITAL_BASE + 46U)
#define DO16_DATA_READ_BASE								(FUNCTION_DIGITAL_BASE + 47U)

#define TPK_PARA_BASE 									400U
#define WINTER_OUTDOOR_TEMPERATURE_SET_BASE			    (TPK_PARA_BASE + 56U)
#define WINTER_INDOOR_TEMPERATURE_SET_BASE              (TPK_PARA_BASE + 42U)
#define WINTER_DIF_PRESSURE_MAX_SET_BASE			    (TPK_PARA_BASE + 43U)
#define WINTER_DIF_PRESSURE_MIN_SET_BASE                (TPK_PARA_BASE + 44U)
#define WINTER_FREQUENCY_MAX_SET_BASE                   (TPK_PARA_BASE + 45U)                
#define WINTER_FREQUENCY_MIN_SET_BASE                   (TPK_PARA_BASE + 46U)
#define WINTER_STARTPOINT_OUTDOOR_TEMPERATURE_SET_BASE  (TPK_PARA_BASE + 47U)
#define WINTER_WATER_SUPPLY_MAX_TEMPERATURE_SET_BASE    (TPK_PARA_BASE + 48U)
#define WINTER_WATER_SUPPLY_MIN_TEMPERATURE_SET_BASE    (TPK_PARA_BASE + 49U)

#define SUMMER_OUTDOOR_TEMPERATURE_SET_BASE             (TPK_PARA_BASE + 50U)
#define SUMMER_INDOOR_TEMPERATURE_SET_BASE              (TPK_PARA_BASE + 51U)
#define SUMMER_DIF_PRESSURE_MAX_SET_BASE			    (TPK_PARA_BASE + 52U)
#define SUMMER_DIF_PRESSURE_MIN_SET_BASE                (TPK_PARA_BASE + 53U)
#define SUMMER_FREQUENCY_MAX_SET_BASE                   (TPK_PARA_BASE + 54U)               
#define SUMMER_FREQUENCY_MIN_SET_BASE                   (TPK_PARA_BASE + 55U)
#define SUMMER_STARTPOINT_OUTDOOR_TEMPERATURE_SET_BASE  (TPK_PARA_BASE + 56U)
#define SUMMER_WATER_SUPPLY_MAX_TEMPERATURE_SET_BASE    (TPK_PARA_BASE + 17U)
#define SUMMER_WATER_SUPPLY_MIN_TEMPERATURE_SET_BASE    (TPK_PARA_BASE + 18U)

#define SEASON_WORK_CONDITION_SET_BASE                  (TPK_PARA_BASE + 19U)
#define ACCELERATION_TIME_OUT_FREQUENCY_SET_BASE        (TPK_PARA_BASE + 20U)
#define DECELERATION_TIME_OUT_FREQUENCY_SET_BASE        (TPK_PARA_BASE + 21U)
#define FILTER_TIME_IN_SIGNAL_SET_BASE                  (TPK_PARA_BASE + 22U)
#define METHOD_STOPPING_PUMP_SET_BASE                   (TPK_PARA_BASE + 23U)
#define INCREASE_PUMP_DELAY_TIME_SET_BASE               (TPK_PARA_BASE + 24U)
#define DECREASE_PUMP_DELAY_TIME_SET_BASE               (TPK_PARA_BASE + 25U)
#define INCREASE_PUMP_PLUS_DIF_PRESSURE_SET_BASE        (TPK_PARA_BASE + 26U)
#define DECREASE_PUMP_MINUS_DIF_PRESSURE_SET_BASE       (TPK_PARA_BASE + 27U)
#define SWITCH_PUMP_PLUS_DIF_PRESSURE_SET_BASE          (TPK_PARA_BASE + 28U)
#define SWITCH_PUMP_MINUS_DIF_PRESSURE_SET_BASE         (TPK_PARA_BASE + 29U)
#define MIN_FREQUENCY_STOP_PUMP_SET_BASE                (TPK_PARA_BASE + 30U)

#define CONTROL_CYCLE_SET_BASE                          (TPK_PARA_BASE + 31U)
#define CONTROL_METHOD_SET_BASE                         (TPK_PARA_BASE + 32U)
#define PID_GENERAL_PROPORTION_BASE                     (TPK_PARA_BASE + 33U)
#define PID_GENERAL_INTEGRAL_TIME_BASE                  (TPK_PARA_BASE + 34U)
#define PID_TEMPERATURE_CONTROL_PROPORTION_BASE         (TPK_PARA_BASE + 35U)
#define PID_TEMPERATURE_CONTROL_INTEGRAL_TIME_BASE      (TPK_PARA_BASE + 36U)
#define PID_PRESSURE_CONTROL_PROPORTION_BASE            (TPK_PARA_BASE + 37U)
#define PID_PRESSURE_CONTROL_INTEGRAL_TIME_BASE         (TPK_PARA_BASE + 38U)

//lc 10152017 define PID parameter
#define PID_PARAMETER_BASE 															TPK_PARA_BASE
#define PID_CONTROL_CYCLE                          			(PID_PARAMETER_BASE + 0U)
#define PID_CONTROL_ENABLE_AI1             							(PID_PARAMETER_BASE + 1U)
#define PID_PROPORTION_HI_AI1              							(PID_PARAMETER_BASE + 2U)
#define PID_PROPORTION_LO_AI1              							(PID_PARAMETER_BASE + 3U)
#define PID_INTERGRAL_HI_AI1             								(PID_PARAMETER_BASE + 4U)
#define PID_INTERGRAL_LO_AI1              							(PID_PARAMETER_BASE + 5U)
#define PID_DERIVATIVE_HI_AI1     											(PID_PARAMETER_BASE + 6U)
#define PID_DERIVATIVE_LO_AI1     											(PID_PARAMETER_BASE + 7U)
#define PID_SAMPLING_VALUE_SELECTION_AI1 								(PID_PARAMETER_BASE + 8U)
#define PID_SAMPLING_VALUE_REMOTE_AI1							    	(PID_PARAMETER_BASE + 9U)
#define PID_TARGET_HI_AI1													      (PID_PARAMETER_BASE + 10U)
#define PID_TARGET_LO_AI1													      (PID_PARAMETER_BASE + 11U)
#define PID_RANGE_MIN_HI_AI1											      (PID_PARAMETER_BASE + 12U)
#define PID_RANGE_MIN_LO_AI1											      (PID_PARAMETER_BASE + 13U)
#define PID_RANGE_MAX_HI_AI1									         	(PID_PARAMETER_BASE + 14U)
#define PID_RANGE_MAX_LO_AI1									         	(PID_PARAMETER_BASE + 15U)
#define PID_CAL_AI1														         	(PID_PARAMETER_BASE + 16U)

#define PID_CONTROL_ENABLE_AI2             							(PID_PARAMETER_BASE + 17U)
#define PID_PROPORTION_HI_AI2              							(PID_PARAMETER_BASE + 18U)
#define PID_PROPORTION_LO_AI2              							(PID_PARAMETER_BASE + 19U)
#define PID_INTERGRAL_HI_AI2             								(PID_PARAMETER_BASE + 20U)
#define PID_INTERGRAL_LO_AI2              							(PID_PARAMETER_BASE + 21U)
#define PID_DERIVATIVE_HI_AI2     											(PID_PARAMETER_BASE + 22U)
#define PID_DERIVATIVE_LO_AI2     											(PID_PARAMETER_BASE + 23U)
#define PID_SAMPLING_VALUE_SELECTION_AI2 								(PID_PARAMETER_BASE + 24U)
#define PID_SAMPLING_VALUE_REMOTE_AI2							    	(PID_PARAMETER_BASE + 25U)
#define PID_TARGET_HI_AI2													      (PID_PARAMETER_BASE + 26U)
#define PID_TARGET_LO_AI2													      (PID_PARAMETER_BASE + 27U)
#define PID_RANGE_MIN_HI_AI2											      (PID_PARAMETER_BASE + 28U)
#define PID_RANGE_MIN_LO_AI2											      (PID_PARAMETER_BASE + 29U)
#define PID_RANGE_MAX_HI_AI2									         	(PID_PARAMETER_BASE + 30U)
#define PID_RANGE_MAX_LO_AI2									         	(PID_PARAMETER_BASE + 31U)
#define PID_CAL_AI2												         			(PID_PARAMETER_BASE + 32U)
#define CAL_START_TH_AO1									         			(PID_PARAMETER_BASE + 33U)
#define COEF_HI_AO1												         			(PID_PARAMETER_BASE + 34U)
#define COEF_LO_AO1												         			(PID_PARAMETER_BASE + 35U)
#define OFFSET_HI_AO1											         			(PID_PARAMETER_BASE + 36U)
#define OFFSET_LO_AO1											         			(PID_PARAMETER_BASE + 37U)
#define CAL_START_TH_AO2									         			(PID_PARAMETER_BASE + 38U)
#define COEF_HI_AO2												         			(PID_PARAMETER_BASE + 39U)
#define COEF_LO_AO2												         			(PID_PARAMETER_BASE + 40U)
#define OFFSET_HI_AO2											         			(PID_PARAMETER_BASE + 41U)
#define OFFSET_LO_AO2											         			(PID_PARAMETER_BASE + 42U)
#define CAL_START_TH_AO3									         			(PID_PARAMETER_BASE + 43U)
#define COEF_HI_AO3												         			(PID_PARAMETER_BASE + 44U)
#define COEF_LO_AO3												         			(PID_PARAMETER_BASE + 45U)
#define OFFSET_HI_AO3											         			(PID_PARAMETER_BASE + 46U)
#define OFFSET_LO_AO3											         			(PID_PARAMETER_BASE + 47U)
#define CAL_START_TH_AO4									         			(PID_PARAMETER_BASE + 48U)
#define COEF_HI_AO4												         			(PID_PARAMETER_BASE + 49U)
#define COEF_LO_AO4												         			(PID_PARAMETER_BASE + 50U)
#define OFFSET_HI_AO4											         			(PID_PARAMETER_BASE + 51U)
#define OFFSET_LO_AO4											         			(PID_PARAMETER_BASE + 52U)
//lc 111117
#define COEF_HI_ADC1											(PID_PARAMETER_BASE + 53U)
#define COEF_LO_ADC1											(PID_PARAMETER_BASE + 54U)
#define OFFSET_HI_ADC1										(PID_PARAMETER_BASE + 55U)
#define OFFSET_LO_ADC1										(PID_PARAMETER_BASE + 56U)
#define COEF_HI_ADC2											(PID_PARAMETER_BASE + 57U)
#define COEF_LO_ADC2											(PID_PARAMETER_BASE + 58U)
#define OFFSET_HI_ADC2										(PID_PARAMETER_BASE + 59U)
#define OFFSET_LO_ADC2										(PID_PARAMETER_BASE + 60U)


#define  PID_DEBUG_1                                (PID_PARAMETER_BASE + 53U)
#define  PID_DEBUG_2                                (PID_PARAMETER_BASE + 54U)
#define  PID_DEBUG_3                                (PID_PARAMETER_BASE + 55U)
#define  PID_DEBUG_4                                (PID_PARAMETER_BASE + 56U)
#define  PID_DEBUG_5                                (PID_PARAMETER_BASE + 57U)
#define  PID_DEBUG_6                                (PID_PARAMETER_BASE + 58U)
       

#define  DO_IIC_BASE											0x400U
#define  DO_ADDR_LO 											DO_IIC_BASE
#define  DO_ADDR_HI												(DO_IIC_BASE + 1U)


/* GPIO Pin sources ----------------------------------------------------------*/
/* Exported variables ------------------------------------------------------------*/
extern u8 System_Status[9];
//extern u16 DEBUG_ERROR;
extern u8 Parameter_Set_Type[18];
extern float Parameter_Set_Rang_Max[18];
extern float Parameter_Set_Rang_Min[18];
extern float Parameter_Set_Adjust[18];
extern float Parameter_Set_Gain[18];
extern u16 Function_Analog_Origin[20];
extern float Function_Analog_FINAL[20];

extern u8 Function_Digital[32];

extern s16 ALL_DATA_RAM[512];

extern u32 TimeBug;
/* Exported functions ------------------------------------------------------- */
extern void Control_Global_Init(void);

#endif /* __comm_global_H */

/******************* (C) COPYRIGHT YIYA TEAM *****END OF FILE****/
