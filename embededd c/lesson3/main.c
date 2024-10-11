#include "main.h"

#define RCC_BASE 0X40021000
#define GPIOA_BASE 0X40010800
#define RCC_APB2ENR *(volatile uint32_t *) (RCC_BASE +0x18)
#define GPIOA_CRH *(volatile uint32_t *) (GPIOA_BASE +0x04)
#define GPIOA_ODR *(volatile uint32_t *) (GPIOA_BASE +0X0C)




int main(void){

	RCC_APB2ENR |= 1<<2;
	GPIOA_CRH &= 0Xff0fffff;
	GPIOA_CRH |= 0x00200000;
	while(1){
		GPIOA_ODR |=1<<13 ; //sit bit 13
		for(int i =0;i<5000;i++);
		GPIOA_ODR &= ~(1<<13); //clear bit 13
		for(int i =0;i<5000;i++);
	}

	return 0;
}
