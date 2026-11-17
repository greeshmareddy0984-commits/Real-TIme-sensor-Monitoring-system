
   #include "sensors_header.h"
   
   float temp_read(unsigned int ch_num)
   {
    
       float adc_value =adc_read(ch_num);
       float voltage_mv = (adc_value * 3300.0) / 1023.0;
       float temp_c = (voltage_mv / 100.0);
       return temp_c;
  
  }
  
 
