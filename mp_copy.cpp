#include "Mp_int.h"

Mp_int &Mp_int::operator=(const Mp_int &m){

  dp = new mp_digit[m.alloc];

  try{
    if(dp == nullptr){
      throw mem_error();
    }
  }catch(mp_error &e){
    e.handle_error();
  }

  for(int i = 0; i < m.used; i++){
    dp[i] = m.dp[i];
  }

  for(int i = m.used - 1; i < m.alloc; i++){
    dp[i] = 0;    
  }

  alloc = m.alloc;
  used = m.used;
  sign = m.sign;

  return *this;
}