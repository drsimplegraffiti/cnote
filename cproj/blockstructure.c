#include <stdio.h>

int main() {
  int x = 10;

  {             // new block
    int y = 20; // Only visible inside this block
    printf("Inside block: x = %d, y = %d\n", x, y);
  }

  // printf("%d", y); // Error: y is not visible here
  return 0;
}
