#include <stdio.h>

#define PI 3.14159            // Constant macro
#define SQUARE(x) ((x) * (x)) // Function-like macro

int main() {
  printf("PI = %.2f\n", PI);
  printf("Square of 5 = %d\n", SQUARE(5));
  return 0;
}
