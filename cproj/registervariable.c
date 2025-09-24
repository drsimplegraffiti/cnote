#include <stdio.h>

int main() {
  register int i; // Hint to store in CPU register (faster access)
  for (i = 0; i < 5; i++) {
    printf("i = %d\n", i);
  }
  return 0;
}
