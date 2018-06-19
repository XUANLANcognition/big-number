#include "Mp_int.h"

void Mp_int::mp_zero(){

  for(int i = 0; i < used; i++){
    dp[i] = 0;
  }

  used = 0;
  sign = MP_POSI;
}