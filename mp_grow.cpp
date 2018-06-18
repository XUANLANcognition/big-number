#include "Mp_int.h"

void Mp_int::mp_grow(int b){

  if(alloc >= b){
    return;
  }

  int u, v;

  u = b % MP_PREC;
  v = b - u + alloc;

  mp_digit *tmp = new mp_digit[v];

  try{
    if(tmp == nullptr){
      throw mem_error();
    }
  }catch(mp_error &e){
    e.handle_error();
  }

  int i;

  for(i = 0; i < alloc; i++){
    tmp[i] = dp[i];  
  }

  for(; i < v; i++){
    tmp[i] = 0;
  }
  
  delete [] dp;
  dp = tmp;
  alloc = v;
  
  return;
}