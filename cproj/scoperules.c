#include <stdio.h>

int globalVar = 10; // Global scope

void test() {
  int localVar = 20; // Local scope
  printf("Inside test(): globalVar = %d, localVar = %d\n", globalVar, localVar);
}

int main() {
  test();
  printf("In main(): globalVar = %d\n", globalVar);
  // localVar is not accessible here
  return 0;
}
