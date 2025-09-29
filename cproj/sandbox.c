#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  int age;
  char client[255];
  bool istall;

  // Prompt for age
  printf("Enter age: ");
  fflush(stdout); // ensure prompt prints immediately
  scanf("%d", &age);

  // Prompt for client name
  printf("Enter the client: ");
  fflush(stdout);
  scanf("%s", client); // reads until first space

  // Prompt for height (tall yes/no)
  printf("Are you tall? (0 = No, 1 = Yes): ");
  fflush(stdout);
  int tmp;
  scanf("%d", &tmp);
  istall = tmp != 0; // convert integer input to bool

  // Print tall status
  printf("Tall? %s\n", istall ? "Yes" : "No");

  // Check age and greet client
  if (age < 8) {
    printf("You are an underage\n");
  } else if (strcmp(client, "james") == 0) {
    printf("Hello James!\n");
  } else {
    printf("Hello %s\n", client);
  }

  return 0;
}
