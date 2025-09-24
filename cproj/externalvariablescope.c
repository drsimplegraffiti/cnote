#include <stdio.h>

int counter = 0; // external variable

void increment(void);

int main(void) {
  increment();
  increment();

  printf("Counter = %d\n", counter);
  return 0;
}

void increment(void) { counter++; }
