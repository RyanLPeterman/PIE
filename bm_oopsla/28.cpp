#include "bm_oopsla.h"

int main() {
  static int x = 0, y = 0, z = 0, k = 0;
  INITIALIZE("(%d, %d, %d, %d)\n", k, x, y, z);

  while(unknown1()) {
    PRINT_VARS();
    if(k % 3 == 0) x++;
    y++;
    z++;
    k = x+y+z;
  }
  PRINT_VARS();

  assert(x == y);
  assert(y == z);
  return 0;
}
