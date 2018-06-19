#include "Mp_int.h"

void Mp_int::mp_set(unsigned int b){

  this->mp_zero();

  mp_digit mask = 255;

  for(int i = 0; i < 4; i++){
    dp[i] = b & mask;
    b >>= 8;
    used++;
  }

  this->mp_zip();

  sign = MP_POSI;

}