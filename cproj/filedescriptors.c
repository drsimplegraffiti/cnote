#include <stdio.h>
#include <unistd.h>

int main() {
  int fd; // File descriptor (integer)
  printf("Standard input (stdin) file descriptor: %d\n", STDIN_FILENO);
  printf("Standard output (stdout) file descriptor: %d\n", STDOUT_FILENO);
  printf("Standard error (stderr) file descriptor: %d\n", STDERR_FILENO);
  return 0;
}
