#include <stdio.h>

struct Point {
  int x;
  int y;
};

// Function taking structure as argument
void printPoint(struct Point p) { printf("Point: (%d, %d)\n", p.x, p.y); }

// Function returning structure
struct Point createPoint(int x, int y) {
  struct Point p;
  p.x = x;
  p.y = y;
  return p;
}

int main() {
  struct Point pt1 = createPoint(5, 7);
  printPoint(pt1);
  return 0;
}
