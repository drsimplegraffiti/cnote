#include "mathutils.h"
#include <stdio.h>

int main() {
  printf("3 + 4 = %d\n", add(3, 4));
  return 0;
}

// gcc main.c mathutils.c -o program
// cc main.c mathutils.c -o program
