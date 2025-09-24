#include <stdio.h>

int main() {
  int i = 1;

  // While loop: executes while condition is true
  while (i <= 5) {
    printf("While loop: i = %d\n", i);
    i++;
  }

  // For loop: initialization; condition; update
  for (int j = 1; j <= 5; j++) {
    printf("For loop: j = %d\n", j);
  }

  return 0;
}
