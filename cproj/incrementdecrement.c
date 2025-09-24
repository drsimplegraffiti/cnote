#include <stdio.h>

int main() {
  int x = 5;

  printf("x = %d\n", x);
  printf("++x = %d (pre-increment)\n", ++x);
  printf("x++ = %d (post-increment)\n", x++);
  printf("After post-increment, x = %d\n", x);
  return 0;
}
