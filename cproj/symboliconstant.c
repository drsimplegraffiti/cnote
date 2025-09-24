#include <stdio.h>
#define PI 3.1456 // symbolic constant

// use #define or const
int main(void) {

  const int DAYS = 7; // This is also valid
  printf("PI = %f\n DAYS = %d\n", PI, DAYS);
  return 0;
}
