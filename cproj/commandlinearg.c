#include <stdio.h>

// argc = argument count, argv = argument vector (array of strings)
int main(int argc, char *argv[]) {
  printf("Program name: %s\n", argv[0]);

  for (int i = 1; i < argc; i++) {
    printf("Arg %d: %s\n", i, argv[i]);
  }
  return 0;
}
