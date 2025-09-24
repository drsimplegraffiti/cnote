#include <stdio.h>

int main() {
  char line[100];
  printf("Enter a line of text: ");
  fgets(line, sizeof(line), stdin); // Read full line
  printf("You entered: %s", line);
  return 0;
}
