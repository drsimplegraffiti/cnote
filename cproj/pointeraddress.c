#include <stdio.h>

int main() {
  int x = 10;
  int *p = &x; // p stores address of x

  printf("x = %d\n", x);
  printf("Address of x = %p\n", (void *)&x);
  printf("Pointer p = %p, *p = %d\n", (void *)p, *p);
  return 0;
}
