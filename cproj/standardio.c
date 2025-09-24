#include <stdio.h>

int main() {
  int num;
  printf("Enter a number: "); // Print to stdout
  scanf("%d", &num);          // Read from stdin
  printf("You entered: %d\n", num);
  return 0;
}
