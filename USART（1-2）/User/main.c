/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   USART printf example
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:Ұ�� iSO STM32 ������ 
  * ��̳    :http://www.chuxue123.com
  * �Ա�    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */
  
#include "stm32f10x.h"
#include "usart.h"


 /**
  * @brief  ������
  * @param  ��
  * @retval ��
  */
int main(void)
{
		/* USART1 config 115200 8-N-1 */
		USART1_Config();
		/* USART2 config 115200 8-N-1 */
		USART2_Config();

	
		USART_printf(USART2,"\r\n ��ӭʹ��Ұ�� iSO STM32 ������ \r\n");
		USART_printf(USART1,"\r\n ��ӭʹ��Ұ�� iSO STM32 ������ \r\n");
		for(;;)
		{
	
		}
}
/*********************************************END OF FILE**********************/
