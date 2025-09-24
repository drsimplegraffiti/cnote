#include <stdio.h>

int main() {
  const char *fruits[] = {"Apple", "Banana", "Cherry"};

  for (int i = 0; i < 3; i++) {
    printf("Fruit[%d] = %s\n", i, fruits[i]);
  }
  return 0;
}
