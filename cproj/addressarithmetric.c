#include <stdio.h>

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  printf("%p\n", arr);
  int *p = arr;

  printf("First element: %d\n", *p);
  printf("Second element: %d\n", *(p + 1)); // Move pointer by 1 (next int)

  p += 2; // Now points to arr[2]
  printf("Now p points to: %d\n", *p);
  return 0;
}
