#include <stdio.h>

// Function prototype: takes pointers to ints
void swap(int *a, int *b);

int main(void) {
  int a = 21; // a:21
  int b = 17; // b:17

  // Pass the addresses of a and b, so swap can modify the originals
  swap(&a, &b);

  printf("main: a = %d, b = %d\n", a, b); // a:17, b:21
  return 0;
}

/*
 * In C, function arguments are always passed by value.
 * - If you pass a variable directly (e.g., swap(a, b)),
 *   the function only receives a copy, so the original
 *   variables in main are not changed.
 * - If you want the function to modify the originals,
 *   you must pass their addresses (pointers).
 *
 * Example of the non-working version (pass by value):
 *
 *   void swap(int a, int b) {
 *       int t = a;
 *       a = b;
 *       b = t;
 *       // Only swaps local copies, main's a and b remain unchanged
 *   }
 */

void swap(int *pa, int *pb) { // pa → a: 21 pb → b: 17
  int t = *pa;                // t: 21
  *pa = *pb;                  // pa → a: 17 pb → b: 17
  *pb = t;                    // pa → a: 17 pb → b: 21

  printf("swap: a = %d, b = %d\n", *pa, *pb);
}
