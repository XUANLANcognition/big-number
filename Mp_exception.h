#ifndef _MP_EXCEPTION_H
#define _MP_EXCEPTION_H

#include "bigNum.h"

class mp_error {
 public:
  mp_error();
  virtual void handle_error() = 0;
};

class mem_error : public mp_error {
 public:
  mem_error();
  void handle_error();
};

#endif