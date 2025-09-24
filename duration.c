// Key concepts in C
//
// Duration / Storage Duration → how long the variable exists in memory.
//
// Lifetime → when the variable is created and destroyed during program
// execution.
//
// In C, there are four storage durations:
//
// Automatic duration → variables inside a block (e.g., int i = 0;) → created
// when block is entered, destroyed when block ends.
//
// Static duration → variables declared with static (or globals) → exist for the
// entire run of the program.
//
// Thread duration → variables declared with _Thread_local.
//
// Allocated duration → created dynamically with malloc/free.

#include <stdio.h>

void increment(void) {
  static unsigned int counter = 0; // static storage duration
  counter++;
  printf("%d ", counter);
}

int main(void) {
  for (int i = 0; i < 5; i++) {
    increment();
  }
  return 0;
}
