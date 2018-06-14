#include "Mp_int.h"

/* constructor of the Mp_int */

Mp_int::Mp_int() try {
  dp = new mp_digit[MP_PREC];

  if(dp == nullptr){
    throw mem_error();
  }

  for(int i = 0; i < MP_PREC; i++){
    dp[i] = 0;
  }

  alloc = MP_PREC;
  used = 0;
  sign = MP_POSI;
} catch (const mem_error &e) {
}
    
/* default constructor */



