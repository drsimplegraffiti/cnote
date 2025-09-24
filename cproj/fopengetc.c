#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct {
  int fd;
} MY_FILE;

// Simplified fopen
MY_FILE *my_fopen(const char *filename) {
  MY_FILE *fp = malloc(sizeof(MY_FILE));
  if (!fp)
    return NULL;
  fp->fd = open(filename, O_RDONLY);
  if (fp->fd == -1) {
    free(fp);
    return NULL;
  }
  return fp;
}

// Simplified getc
int my_getc(MY_FILE *fp) {
  char c;
  if (read(fp->fd, &c, 1) == 1)
    return (unsigned char)c;
  return EOF;
}

void my_fclose(MY_FILE *fp) {
  if (fp) {
    close(fp->fd);
    free(fp);
  }
}

int main() {
  MY_FILE *fp = my_fopen("example.txt");
  if (!fp) {
    perror("my_fopen");
    return 1;
  }

  int c;
  while ((c = my_getc(fp)) != EOF) {
    putchar(c);
  }

  my_fclose(fp);
  return 0;
}
