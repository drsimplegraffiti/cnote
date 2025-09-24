#include <stdio.h>

int main() {
  int x = 10;

  // Single statement
  x = x + 5;

  // A block groups multiple statements with braces { }
  {
    int y = 2;
    x = x * y;
    printf("Inside block: x = %d\n", x);
  }

  printf("Outside block: x = %d\n", x);
  return 0;
}
