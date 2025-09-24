#include <stdio.h>

struct Month {
  char name[10];
  int days;
};

int main() {
  struct Month months[3] = {{"January", 31}, {"February", 28}, {"March", 31}};

  for (int i = 0; i < 3; i++) {
    printf("%s has %d days\n", months[i].name, months[i].days);
  }
  return 0;
}
