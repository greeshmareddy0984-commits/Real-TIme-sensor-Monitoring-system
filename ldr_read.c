#include "sensors_header.h"
   
   unsigned int ldr_read(unsigned int CH_LDR)
   {
   
      unsigned int ch_ldr=CH_LDR;
      return adc_read(ch_ldr);
   
}






