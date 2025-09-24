#include <stdio.h>

int main() {
  int c;
  printf("Enter a character: ");
  c = getchar();
  ungetc(c, stdin); // Put character back
  printf("You entered: %c\n", getchar());
  return 0;
}
