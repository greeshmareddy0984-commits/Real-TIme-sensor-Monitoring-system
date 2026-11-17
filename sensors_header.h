#include<lpc21xx.h>
    
   /****adc functions***/
   void adc_init(void);
  unsigned int adc_read(unsigned int ch_num);
   
  /***sensor functions  ***/
  
  float ldr_read(unsigned int CH_LDR);
  float temp_read(unsigned int ch_num);
  float potentiometer_read(unsigned int CH_POT);
  
  
  /***timer functions***/
  
  void timer0_init(void);
  void timer_handler(void)__irq  ;
  void config_vic_for_timer(void);
  
  /***uart0 functions     **/
  
  extern void uart0_init(unsigned int baud);
  void uart0_tx(unsigned char data);
  unsigned char uart0_rx(void);
  void uart0_tx_string(char *ptr);
  void uart0_tx_integer(int num);
  void uart0_float(float num);
  
  



