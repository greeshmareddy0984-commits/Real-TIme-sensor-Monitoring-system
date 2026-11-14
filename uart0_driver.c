#include<lpc21xx.h>
#include "sensors_header.h"

void uart0_init(unsigned int baud)
{
int pclk,result=0;
int a[]={15,30,60,15,0};
pclk=a[VPBDIV]*1000000;
result=pclk/(16*baud);
PINSEL0|=0X05;
U0LCR=0X83;
U0DLL=result&0xff;
U0DLM=(result>>8)&0xff;
U0LCR=0X03;
}

#define THRE ((U0LSR>>5)&1)
void uart0_tx(unsigned char data)
{
U0THR=data;
while(THRE==0);
}

#define RDR (U0LSR&1)
unsigned char uart0_rx(void)
{
while(RDR==0);
return U0RBR;
}

void uart0_tx_integer(int num)
{
int a[8],i=0;
if(num==0)
uart0_tx('0');
else if(num<0)
{
num=-num;
uart0_tx('-');
}
while(num>0)
{
a[i]=num%10+48;
num=num/10;
i++;
}
for(i=i-1;i>=0;i--)
uart0_tx(a[i]);
}


void uart0_tx_string(char *ptr)
{
while(*ptr!=0)
{
uart0_tx(*ptr);
ptr++;
}
}


  void uart0_float(float num)
  {
  
  int a,b;
  if(num==0)
  uart0_tx('0');
  else if(num<0)
  {
  num=-num;
  uart0_tx('-');
  }
  a=(int)num;
  b=(num-a)*1000000;
  
  uart0_tx_integer(a);
  uart0_tx('.');
  
  uart0_tx_integer(b);
}


	
	