
   #include "sensors_header.h"
   
   unsigned int temp_read(unsigned int ch_num)
   {
    
       unsigned int adc_value =adc_read(ch_num);
       unsigned int voltage_mv = (adc_value * 3300.0) / 1023.0;
       unsigned int temp_c = (voltage_mv / 10.0);
       return temp_c;
  
  }
  
 
