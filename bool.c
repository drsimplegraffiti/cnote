#include <stdbool.h>
#include <stdio.h>

int main(void) {
  _Bool flag1 = 0;    // C built-in boolean type
  bool flag2 = false; // <stdbool.h> alias for _Bool

  printf("flag1 = %d\n", flag1);
  printf("flag2 = %d\n", flag2);

  return 0;
}
