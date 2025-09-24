#include <stdio.h>

struct Flags {
  unsigned int isBold : 1;
  unsigned int isItalic : 1;
  unsigned int isUnderline : 1;
};

int main() {
  struct Flags f = {1, 0, 1};
  printf("Bold=%d, Italic=%d, Underline=%d\n", f.isBold, f.isItalic,
         f.isUnderline);
  return 0;
}
