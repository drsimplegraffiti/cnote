#include <stdio.h>

int main() {
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int (*p)[3] = arr; // Pointer to array of 3 ints

  printf("arr[1][2] = %d\n", arr[1][2]);
  printf("*(p[1] + 2) = %d\n", *(p[1] + 2));
  return 0;
}
