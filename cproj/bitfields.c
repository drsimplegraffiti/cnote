#include <stdio.h>

// Define a structure that uses bit-fields to store flags
struct Flags {
  unsigned int isBold : 1;      // 1 bit: can be 0 (off) or 1 (on)
  unsigned int isItalic : 1;    // 1 bit: can be 0 or 1
  unsigned int isUnderline : 1; // 1 bit: can be 0 or 1
};

int main() {
  // Initialize the structure
  // isBold = 1 (true), isItalic = 0 (false), isUnderline = 1 (true)
  struct Flags f = {1, 0, 1};

  // Print the values of each flag
  // %d is fine here because bit-fields behave like integers
  printf("Bold=%d, Italic=%d, Underline=%d\n", f.isBold, f.isItalic,
         f.isUnderline);

  return 0;
}
