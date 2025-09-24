#include <stdio.h>

// Recursive factorial function
int factorial(int n) {
  if (n == 0)
    return 1;
  return n * factorial(n - 1);
}

int main() {
  int num = 5;
  printf("Factorial of %d = %d\n", num, factorial(num));
  return 0;
}
