#include <stdio.h>

struct Student {
  char name[20];
  int age;
};

int main() {
  struct Student students[3] = {{"Alice", 20}, {"Bob", 22}, {"Charlie", 19}};

  for (int i = 0; i < 3; i++) {
    printf("Student %d: %s, Age: %d\n", i + 1, students[i].name,
           students[i].age);
  }
  return 0;
}
