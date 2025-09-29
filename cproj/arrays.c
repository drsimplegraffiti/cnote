// Arrays hold multiple values of the same type.
// Indexed starting from 0.
//
#include <stdio.h>

int main(void) {
  int nums[5] = {1, 2, 3, 4, 5};

  int sizeOfNumber = sizeof(nums);
  int sizeArray = sizeof(nums[0]);

  printf("%d\n", sizeOfNumber);

  printf("%d\n", sizeArray);
  int size = sizeof(nums) / sizeof(nums[0]);
  for (int i = 0; i < size; i++) {
    printf("%d\n", nums[i]);
  }
}
