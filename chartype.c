#include <stdio.h>
#include <stdlib.h>

// The C language defines three character types: char, signed char, and unsigned
// har.Each
int main(void) {
  char grade = 'A';
  printf("Value: %c\n", grade);
  printf("Size: %zu byte(s)\n", sizeof(grade));
  return EXIT_SUCCESS;
}
