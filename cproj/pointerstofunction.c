#include <stdio.h>

// Function prototypes
int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

int main() {
  // Function pointer
  int (*operation)(int, int);

  operation = add;
  printf("Add: %d\n", operation(3, 4));

  operation = multiply;
  printf("Multiply: %d\n", operation(3, 4));

  return 0;
}
