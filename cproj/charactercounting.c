#include <stdio.h>

int main(void) {
  long count = 0;
  while (getchar() != EOF) {
    count++; // increment per character
  }
  printf("Chars: %ld\n", count);
  return 0;
}
