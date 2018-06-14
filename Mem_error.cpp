#include "Mp_exception.h"

/* mem_error */
mem_error::mem_error() = default;

void mem_error::handle_error(){
  std::cerr << "mem error" << std::endl;
}