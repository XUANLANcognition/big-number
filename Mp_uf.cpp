#include "Mp_int.h"

/* universal interface */
int Mp_int::getAlloc(){
  return alloc;
};
int Mp_int::getUsed(){
  return used;
};
int Mp_int::getSign(){
  return sign;
};
mp_digit *Mp_int::getDp(){
  return dp;
};