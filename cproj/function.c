#include <stdio.h>

// functions Break programs into reusable blocks.

// function prototype
int square(int n);

int main(void) {
  int number = 8;
  int res = square(number);
  printf(" square of %d is %d\n", number, res);
  return 0;
}

// implementation
int square(int n) { return n * n; }
