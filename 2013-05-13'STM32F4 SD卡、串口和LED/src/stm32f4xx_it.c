//V1.0.0
#include "stm32f4xx_it.h"
#include "main.h"
__IO uint8_t RxData; 
//NMI exception handler
void NMI_Handler(void)
{
}

//Hard Fault exception handler
void HardFault_Handler(void)
{
  	while (1)
  	{
  	}
}

//Memory Manage exception handler
void MemManage_Handler(void)
{
  	while (1)
  	{
  	}
}

//Bus Fault exception handler
void BusFault_Handler(void)
{
  	while (1)
  	{
  	}
}

//Usage Fault exception handler
void UsageFault_Handler(void)
{
  	while (1)
  	{
  	}
}

//SVCall exception handler
void SVC_Handler(void)
{
}

//Debug Monitor exception handler
void DebugMon_Handler(void)
{
}

//PendSVC exception handler
void PendSV_Handler(void)
{
}


void SDIO_IRQHandler(void)
{
  	SD_ProcessIRQSrc();
}

void SD_SDIO_DMA_IRQHANDLER(void)
{
  	SD_ProcessDMAIRQ();
}

void USART1_IRQHandler(void)
{
    /* Read one byte from the receive data register */
    RxData = USART_ReceiveData(USART1);
    USART_SendData(USART1, RxData);
}
void USART2_IRQHandler(void)
{
    /* Read one byte from the receive data register */
    RxData = USART_ReceiveData(USART2);
    USART_SendData(USART2, RxData);
}
void USART3_IRQHandler(void)
{
    /* Read one byte from the receive data register */
    RxData = USART_ReceiveData(USART3);
    USART_SendData(USART3, RxData);
}
void UART4_IRQHandler(void)
{
    /* Read one byte from the receive data register */
    RxData = USART_ReceiveData(UART4);
    USART_SendData(USART6, RxData);
}
void USART6_IRQHandler(void)
{
    /* Read one byte from the receive data register */
    RxData = USART_ReceiveData(USART6);
    USART_SendData(USART6, RxData);
}
