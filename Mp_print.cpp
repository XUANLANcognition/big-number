#include "Mp_int.h"

std::ostream &operator<<(std::ostream &os, Mp_int &mp_int){

  if(mp_int.used == 0){
    os << 0;
  }
  else{
    for(int i = 0; i < mp_int.used; i++){
      os << (int)mp_int.dp[i];
    }
  }

  return os;
}