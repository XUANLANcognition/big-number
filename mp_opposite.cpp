#include "Mp_int.h"

Mp_int &Mp_int::operator-(){

  Mp_int *t;
  t = new Mp_int;

  *t = *this;

  if(sign == MP_POSI){
    t->sign = MP_NEGA;
  }else{
    t->sign = MP_POSI;
  }

  return *t;
}