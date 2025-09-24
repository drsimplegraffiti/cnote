#include <stdio.h>

int main() {
  int i = 5;
  float f = 2.5;

  float result = i + f; // int → float conversion
  printf("Result: %.2f\n", result);

  int truncated = (int)f; // Explicit cast
  printf("Truncated float: %d\n", truncated);
  return 0;
}
