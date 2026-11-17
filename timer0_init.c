#include "sensors_header.h"
   
  unsigned int flag=0;
	unsigned int tick=0;
	
   void timer0_init(void)
   {
  unsigned int pclk;
  if(VPBDIV==0)
  pclk=15000;
  else if(VPBDIV==1)
  pclk=60000;
  else if(VPBDIV==2)
  pclk=30000;
  T0TCR=0X02;
  T0PC=0;
  T0PR=pclk-1;
  T0MR0=100;
  T0MCR=3;
  T0IR=0XFF;
  T0TCR=0X01;
  }
	
		 
  void config_vic_for_timer(void)
  {
  VICIntSelect=0;
  VICVectCntl0=(1<<5)|4;
  VICVectAddr0=(unsigned int)timer_handler;
  VICIntEnable=1<<4;
  
  }
  
	
	int c=0;
  void timer_handler(void) __irq
  {
    c++;
		if(c==2)
    flag= 1;
    if(c==4)
    flag=2;
    if(c==6)
    flag=3;
		if(c>10)
			c=0;
		if(c==10)
		{
			tick++;
			//flag1=1;
		}
   T0IR=1;
   VICVectAddr=0;
  }
  
  
