#include <stdio.h>

int main() {
  int i = 0;

  // Label definition
start:
  printf("i = %d\n", i);
  i++;

  if (i < 3) {
    goto start; // Jump to label
  }

  printf("Loop ended using goto\n");
  return 0;
}
