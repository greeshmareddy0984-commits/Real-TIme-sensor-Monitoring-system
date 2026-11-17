#include"sensors_header.h"
  
   float potentiometer_read(unsigned int CH_POT)
   {
     
       float adc_value;
       float Vout;
       adc_value=adc_read(CH_POT);
       Vout=(adc_value*3.3)/1023; // volatge conversions from potentiometer value 
       return Vout;  
  
  }


