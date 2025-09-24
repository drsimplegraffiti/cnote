#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "Hello";
  char str2[] = "World";

  strcat(str1, str2); // Concatenate
  printf("Concatenated: %s\n", str1);

  printf("Length of str2: %zu\n", strlen(str2));
  return 0;
}
