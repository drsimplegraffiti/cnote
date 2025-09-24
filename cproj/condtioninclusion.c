#include <stdio.h>

#define DEBUG 1

int main() {
#if DEBUG
  printf("Debug mode is ON\n");
#else
  printf("Debug mode is OFF\n");
#endif
  return 0;
}
