#include "bm_oopsla.h"

int main() {
  int n, x = 0, y = 0, i = 0, m = 10;
  INITIALIZE("(%d, %d, %d, %d, %d)\n", i, m, n, x, y);

  while(i < n) {
    PRINT_VARS();
    i++;
    x++;
    if(i % 2 == 0) y++;
  }
  PRINT_VARS();

  if(i == m) assert(x == 2 * y);
  return 0;
}
