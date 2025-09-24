#include <stdio.h>

int main() {

  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("starting point of fahr %d\n", fahr);
  printf("starting point of celsius %d\n", celsius);

  while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%3d\t%6d\n", fahr,
           celsius); // first number is 3 digit wide, second 6 digit wide
    fahr = fahr + step;
  }
  return 0;
}
