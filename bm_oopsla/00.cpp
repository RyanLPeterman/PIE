#include "bm_oopsla.h"

int main() {
  int x = 1, y = 1;
  INITIALIZE("(%d, %d)\n", x, y);

  while(unknown()) {
    PRINT_VARS();
    x++;
    y++;
  }
  PRINT_VARS();

  assert(x == y);
  return 0;
}
