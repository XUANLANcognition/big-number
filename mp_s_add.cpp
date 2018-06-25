#include "Mp_int.h"

void mp_s_add(Mp_int &a, Mp_int &b, Mp_int &c){

  int max, min;
  Mp_int r;

  if(a.used >= b.used){
    max = a.used;
    min = b.used;
    r = a;
  }
  else{
    max = b.used;
    min = a.used;
    r = b;
  }
  
  if(c.alloc < (max + 1)){
    c.mp_grow(max + 1);
  }

  mp_digit *s1, *s2, *d, u;
  uint16_t t1, t2, t3;

  c.mp_zero();

  u = 0;
  s1 = a.dp;
  s2 = b.dp;
  d = c.dp;

  int i;
  for(i = 0; i < min; i++){
    t1 = *s1++;
    t2 = *s2++;
    t3 = t1 + t2 + u;
    u = t3 >> 8;
    *d++ = t3;
    c.used++;
  } 

  if(min != max){
    t1 = 0;
    t3 = 0;
    for(; i < max; i++){
      t1 = r.dp[i];
      t3 = t1 + u;
      u = t3 >> 8;
      *d++ = t3;
      c.used++;
    }
  }

  c.mp_zip();
}