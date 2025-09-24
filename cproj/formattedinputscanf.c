#include <stdio.h>

int main() {
  int age;
  float height;

  printf("Enter age and height: ");
  scanf("%d %f", &age, &height); // Read multiple inputs
  printf("Age = %d, Height = %.2f\n", age, height);
  return 0;
}
