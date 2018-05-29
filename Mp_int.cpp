#include "Mp_int.h"

/* constructor of the Mp_int */

Mp_int::Mp_int() = default;    /* default constructor */

Mp_int::Mp_int(const int alloc, const int used, const int sign) : 
alloc(alloc), used(used), sign(sign) {
  
};    /* three parama */


