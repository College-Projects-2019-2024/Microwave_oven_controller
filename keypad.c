
#include "tm4c123gh6pm.h"
#include "delays.h"

unsigned char symbol[4][4] ={{'1', '2' ,'3', 'A'},{'4', '5', '6', 'B'},{'7', '8', '9', 'C'},{'*', '0', '#', 'D'}};

char get_keypad_input(void){
	int i,j;
	
	
	while(1){
		
		for( i = 0; i < 4; i++)                        //columns traverse
    {
      GPIO_PORTC_DATA_R = (1U << (i+4));
      delay_micro(2);
      for( j = 0; j < 4; j++)                     //rows traverse
      {
        if((GPIO_PORTE_DATA_R &0x0F )& (1U << j))
          return symbol[j][i];
      }
    }

	}
	
}