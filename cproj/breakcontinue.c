#include <stdio.h>

int main() {
  // Demonstrate break
  for (int i = 1; i <= 5; i++) {
    if (i == 3) {
      printf("Breaking at i = %d\n", i);
      break; // Exit the loop completely
    }
    printf("i = %d\n", i);
  }

  // Demonstrate continue
  for (int j = 1; j <= 5; j++) {
    if (j == 3) {
      printf("Skipping j = %d\n", j);
      continue; // Skip current iteration
    }
    printf("j = %d\n", j);
  }

  return 0;
}
