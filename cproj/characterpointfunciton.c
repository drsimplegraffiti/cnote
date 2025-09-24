#include <stdio.h>

// Function to print string using char pointer
void printString(const char *s) {
  while (*s != '\0') {
    putchar(*s);
    s++;
  }
  putchar('\n');
}

int main() {
  char message[] = "Hello, world!";
  printString(message);
  return 0;
}
