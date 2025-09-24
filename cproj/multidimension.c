#include <stdio.h>

int main() {
  const char *names[] = {"Alice", "Bob", "Charlie"}; // Array of pointers
  const char **pp = names;                           // Pointer to pointer

  for (int i = 0; i < 3; i++) {
    printf("names[%d] = %s\n", i, names[i]);
  }

  printf("First name via pp: %s\n", *pp);
  return 0;
}
