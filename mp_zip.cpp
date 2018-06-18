#include "Mp_int.h"

void Mp_int::mp_zip() {

  while (used > 0 && dp[used - 1] == 0) {
    used--;
  }

  if(used == 0){
    sign = MP_POSI;
  }

}