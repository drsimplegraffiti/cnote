#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  int age;
  char client[255];
  bool istall;
  float height;
  int tmp;

  // Enter age
  printf("Enter age: ");
  fflush(stdout);
  scanf("%d", &age);

  // Enter client name
  printf("Enter the client: ");
  fflush(stdout);
  scanf("%s", client);

  // Enter height
  printf("Enter your height: ");
  fflush(stdout);
  scanf("%f", &height);

  // Enter tall status (0 or 1 only)
  do {
    printf("Are you tall? (0 = No, 1 = Yes): ");
    fflush(stdout);
    if (scanf("%d", &tmp) != 1) {
      // Clear invalid input
      while (getchar() != '\n')
        ;
      tmp = -1; // invalid value to continue loop
    }
  } while (tmp != 0 && tmp != 1);

  istall = tmp == 1;

  // Print results
  printf("Tall? %s\n", istall ? "Yes" : "No");
  printf("Your height is %.2f meters\n", height);

  if (age < 8) {
    printf("You are an underage\n");
  } else if (strcmp(client, "james") == 0) {
    printf("Hello James!\n");
  } else {
    printf("Hello %s\n", client);
  }

  return 0;
}
