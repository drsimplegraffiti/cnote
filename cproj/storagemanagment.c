#include <stdio.h>
#include <stdlib.h>

int main() {
  int *arr = malloc(5 * sizeof(int)); // Allocate memory
  if (arr == NULL)
    return 1;

  for (int i = 0; i < 5; i++)
    arr[i] = i + 1;

  for (int i = 0; i < 5; i++)
    printf("%d ", arr[i]);
  free(arr); // Free memory
  return 0;
}
