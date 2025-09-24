#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main() {
  int fd = open("example.txt", O_RDWR | O_CREAT, 0644);
  if (fd == -1)
    return 1;

  write(fd, "ABCDEFGH", 8); // Write 8 bytes

  // Move file pointer to position 4
  lseek(fd, 4, SEEK_SET);
  write(fd, "123", 3); // Overwrite bytes at position 4

  close(fd);
  return 0;
}
