#include "bm_oopsla.h"

int main() {
  static int n, x = 0, m = 0;
  INITIALIZE("(%d, %d, %d)\n", m, n, x);

  while(x < n) {
    PRINT_VARS();
    if(unknown1())
      m = x;
    x++;
  }
  PRINT_VARS();

  if(n > 0) {
    assert(0 <= m);
    assert(m < n);
  }
  return 0;
}