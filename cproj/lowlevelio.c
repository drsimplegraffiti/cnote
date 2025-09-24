#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main() {
  int fd = open("example.txt", O_RDONLY); // Open file for reading
  if (fd == -1) {
    perror("open");
    return 1;
  }

  char buffer[100];
  ssize_t n = read(fd, buffer, sizeof(buffer) - 1); // Read bytes
  if (n > 0) {
    buffer[n] = '\0';                // Null-terminate
    write(STDOUT_FILENO, buffer, n); // Write to stdout
  }

  close(fd);
  return 0;
}
