#include "Mp_int.h"

using namespace std;

int main(){
  Mp_int i;
  cout << i.getAlloc() << endl;
  i.mp_grow(63);
  cout << i.getAlloc() << endl;
  return 0;
}