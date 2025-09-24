#include <stdarg.h>
#include <stdio.h>

// Function to compute sum of variable arguments
int sum(int count, ...) {
  va_list args;
  va_start(args, count);
  int total = 0;
  for (int i = 0; i < count; i++) {
    total += va_arg(args, int);
  }
  va_end(args);
  return total;
}

int main() {
  printf("Sum = %d\n", sum(4, 1, 2, 3, 4));
  return 0;
}
