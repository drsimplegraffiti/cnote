#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL)); // Seed random number generator
  for (int i = 0; i < 5; i++) {
    printf("Random number: %d\n", rand() % 100); // 0-99
  }
  return 0;
}
