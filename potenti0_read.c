#include"sensors_header.h"
  
   unsigned int potentiometer_read(unsigned int CH_POT)
   {
     
       unsigned int adc_value;
       unsigned int Vout;
       adc_value=adc_read(CH_POT);
       Vout=(adc_value*3300)/1023; // volatge conversions from potentiometer value 
       return Vout;  
  
  }


