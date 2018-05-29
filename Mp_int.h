#include "bigNum.h"
#include <vector>

/* Mp_int class */
class Mp_int{
 public:
  Mp_int();
  Mp_int(const int alloc, const int used, const int sign);
 private: 
  int alloc used, sign;
  std::vector<int> space;
}