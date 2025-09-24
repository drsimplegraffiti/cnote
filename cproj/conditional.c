#include <stdio.h>

int main() {
  int age = 18;
  const char *result = (age >= 18) ? "Adult" : "Minor";

  printf("Age: %d, Status: %s\n", age, result);
  return 0;
}

// We use const char *result because the ternary operator returns a pointer to a
// string literal ("Adult" or "Minor"), not a whole character array.
