#include "Mp_int.h"

std::ostream &operator<<(std::ostream &os, Mp_int &mp_int){

  if(mp_int.used == 0){
    os << 0;
  }
  else{
    for(int i = mp_int.used - 1; i >= 0; i--){
      os << (int)mp_int.dp[i] << '.';
    }
  }

  return os;
}