#include <stdio.h>

int main(void) {
  int c, lines = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      lines++;
  }
  printf("Lines: %d\n", lines);
  return 0;
}
