#include <stdio.h> // Preprocessor Driectives
#include <stdlib.h>

int main(void) {

  // the EXIT_SUCCESS and EXIT_FAILURE are called Macros

  if (puts("Hello World") == EOF) {
    return EXIT_FAILURE;
    // code never executes here
  }
  // code never executes here too - referred to as dead code
  return EXIT_SUCCESS; // the EXIT_SUCCESS is like 0 for success;
}

// we have types of compilers
// - GNU compilers: sudo apt-get install gcc-8
// check with : gcc --version
//
// another one is clang
// sudo apt-get install clang
// check with: clang --version
