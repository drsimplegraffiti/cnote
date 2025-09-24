#include <stdio.h>

void demo() {
  static int count = 0; // Value persists between calls
  count++;
  printf("Count = %d\n", count);
}

int main() {
  demo();
  demo();
  demo();
  return 0;
}
