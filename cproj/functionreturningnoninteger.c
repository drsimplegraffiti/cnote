#include <stdio.h>

// Function returning float
float divide(int a, int b) {
  if (b == 0)
    return 0.0f; // Avoid division by zero
  return (float)a / b;
}

int main() {
  int x = 10, y = 3;
  printf("Division result = %.2f\n", divide(x, y));
  return 0;
}
