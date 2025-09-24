#include <stdio.h>

// C provides functions like getchar() and putchar().

int main(void) {
  int c;
  // read chars until EOF (Ctrl+D in Linux, Ctrl+Z in Windows)
  while ((c = getchar()) != EOF) {
    putchar(c); // echo back
  }
  return 0;
}
