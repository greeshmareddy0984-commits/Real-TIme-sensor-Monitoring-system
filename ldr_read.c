#include "sensors_header.h"
   
   float ldr_read(unsigned int CH_LDR)
   {
   
      unsigned int ch_ldr=CH_LDR;
      float ldr_value=adc_read(ch_ldr);
      float ldr=(ldr_value *100)/1023;
      return ldr
   
}






