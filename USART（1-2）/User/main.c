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
  * 实验平台:野火 iSO STM32 开发板 
  * 论坛    :http://www.chuxue123.com
  * 淘宝    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */
  
#include "stm32f10x.h"
#include "usart.h"


 /**
  * @brief  主函数
  * @param  无
  * @retval 无
  */
int main(void)
{
		/* USART1 config 115200 8-N-1 */
		USART1_Config();
		/* USART2 config 115200 8-N-1 */
		USART2_Config();

	
		USART_printf(USART2,"\r\n 欢迎使用野火 iSO STM32 开发板 \r\n");
		USART_printf(USART1,"\r\n 欢迎使用野火 iSO STM32 开发板 \r\n");
		for(;;)
		{
	
		}
}
/*********************************************END OF FILE**********************/
