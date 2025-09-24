#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main() {
  // Create a file (O_CREAT) and open it for writing
  int fd = open("newfile.txt", O_WRONLY | O_CREAT, 0644);
  if (fd == -1) {
    perror("open");
    return 1;
  }

  write(fd, "Hello Unix!\n", 12); // Write data
  close(fd);                      // Close file

  // Remove the file
  if (unlink("newfile.txt") == 0) {
    printf("File deleted successfully\n");
  } else {
    perror("unlink");
  }

  return 0;
}
