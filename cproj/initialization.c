#include <stdio.h>

int main() {
  int numbers[5] = {1, 2, 3, 4, 5}; // Array initialization
  char message[] = "Hello";         // String initialization

  for (int i = 0; i < 5; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\nMessage: %s\n", message);
  return 0;
}
