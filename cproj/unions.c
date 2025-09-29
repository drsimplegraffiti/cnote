#include <stdio.h>

// Define a union named Data
// A union lets multiple members share the same memory space.
// Only one member can hold a useful value at a time.
union Data {
  int i;        // 4 bytes (on most systems)
  float f;      // 4 bytes (on most systems)
  char str[20]; // 20 bytes (largest member)
};

int main() {
  union Data
      d; // Allocate memory equal to the size of the largest member (20 bytes)

  d.i = 10;                  // Store an integer value in the union
  printf("d.i = %d\n", d.i); // Correct: prints 10

  d.f = 3.14; // Store a float value in the same memory location
              // ⚠️ This overwrites the previous integer value
  printf("d.f = %.2f (overwrites previous i)\n", d.f);

  // Note: If you try to print d.i again here, you’ll likely get garbage
  // because d.f overwrote the same memory space.

  return 0;
}
