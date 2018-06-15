#ifndef _MP_INT_H
#define _MP_INT_H

#include "Mid_components.h"

/* Mp_int class */
class Mp_int{
 public:
  Mp_int();
  ~Mp_int();
  friend std::ostream &operator<<(std::ostream &os, Mp_int &mp_int);

  /* universal interface */
  int getAlloc();
  int getUsed();
  int getSign();
  mp_digit *getDp();

 private: 
  int alloc, used, sign;
  mp_digit *dp;
};

#endif