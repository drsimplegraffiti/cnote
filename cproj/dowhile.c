#include <stdio.h>

int main() {
  int n = 1;

  // Do-while executes at least once
  do {
    printf("n = %d\n", n);
    n++;
  } while (n <= 3);

  return 0;
}
