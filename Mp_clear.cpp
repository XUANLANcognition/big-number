#include "Mp_int.h"

// clear  
Mp_int::~Mp_int(){

  if(dp != nullptr){
      for(int i = 0; i < MP_PREC; i++){
        dp[i] = 0;
      }
  }

  delete [] dp;

  used = 0;
  alloc = 0;
  sign = MP_POSI;
}