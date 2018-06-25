#include "Mp_int.h"

using namespace std;

int main(){
  Mp_int i, k, m;
  i.mp_set(1234586789);
  k.mp_set(1);
  m.mp_set(4321);
  mp_s_add(i, k, m);
  cout << i << endl;
  cout << k << endl;
  cout << m << endl;
  return 0;
}