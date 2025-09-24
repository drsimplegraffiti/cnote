#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Simple memory allocator example
#define SIZE 1024
static char memory[SIZE];
static char *free_ptr = memory;

void *mymalloc(size_t n) {
  if (free_ptr + n <= memory + SIZE) {
    void *p = free_ptr;
    free_ptr += n;
    return p;
  }
  return NULL; // Not enough memory
}

int main() {
  char *p1 = mymalloc(100);
  char *p2 = mymalloc(200);

  if (p1 && p2) {
    strcpy(p1, "Hello");
    strcpy(p2, "World");
    printf("%s %s\n", p1, p2);
  } else {
    printf("Memory allocation failed\n");
  }

  return 0;
}
