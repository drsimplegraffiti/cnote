#include <stdio.h>

int main() {
  FILE *fp = fopen("example.txt", "w"); // Open file for writing
  if (fp == NULL) {
    printf("Error opening file!\n");
    return 1;
  }

  fprintf(fp, "Hello, File!\n"); // Write to file
  fclose(fp);

  fp = fopen("example.txt", "r"); // Open file for reading
  char buffer[50];
  if (fp != NULL) {
    fscanf(fp, "%[^\n]", buffer); // Read until newline
    printf("Read from file: %s\n", buffer);
    fclose(fp);
  }
  return 0;
}
