/**
 * Copyright (c) 2019, Freqchip
 * 
 * All rights reserved.
 * 
 * 
 */

#ifndef BLE_SIMPLE_PERIPHERAL_H
#define BLE_SIMPLE_PERIPHERAL_H
 
 /*
 * INCLUDES (����ͷ�ļ�)
 */
#include "gap_api.h"
/*
 * MACROS (�궨��)
 */
#define PIC1_ADDR 0x43000
#define PIC2_ADDR 0x60000

/*
 * CONSTANTS (��������)
 */    
extern const unsigned	char * lcd_show_workmode[];

/*
 * TYPEDEFS (���Ͷ���)
 */
enum
{
    GATT_SVC_IDX_SP,
    GATT_SVC_NUM    
};

enum WORK_MODE
{
    PICTURE_UPDATE,
    SENSOR_DATA,
    SPEAKER_FROM_FLASH,
    CODEC_TEST,
    MODE_MAX,
};

/*
 * GLOBAL VARIABLES (ȫ�ֱ���)
 */
extern 	uint8_t App_Mode;



/*
 * LOCAL VARIABLES (���ر���)
 */
 
/*
 * LOCAL FUNCTIONS (���غ���)
 */

/*
 * EXTERN FUNCTIONS (�ⲿ����)
 */

/*
 * PUBLIC FUNCTIONS (ȫ�ֺ���)
 */


/** @function group ble peripheral device APIs (ble������ص�API)
 * @{
 */
 
void app_gap_evt_cb(gap_event_t *p_event);


/*********************************************************************
 * @fn      simple_peripheral_init
 *
 * @brief   Initialize simple peripheral profile, BLE related parameters.
 *
 * @param   None. 
 *       
 *
 * @return  None.
 */
void simple_peripheral_init(void);

#endif
