#include <stdio.h>

struct Point {
  int x;
  int y;
};

int main() {
  struct Point p1 = {10, 20};
  struct Point *ptr = &p1; // Pointer to structure

  printf("x = %d, y = %d\n", ptr->x, ptr->y); // Access via pointer
  return 0;
}
