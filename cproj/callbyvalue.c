#include <stdio.h>
// Arguments - Call by Value
// C passes arguments by value (a copy).
// To modify the original, use pointers.

void tryChange(int x) { x = 100; }
void change(int *x) { *x = 100; }

int main(void) {
  int a = 10;
  tryChange(a);          // copy -> has no effect
  printf("a = %d\n", a); // 10

  change(&a); // pointer -> modifies original
  printf("a =   %d\n", a);
  return 0;
}
