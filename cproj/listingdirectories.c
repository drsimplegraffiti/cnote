#include <dirent.h>
#include <stdio.h>

int main() {
  DIR *d = opendir("."); // Open current directory
  if (!d) {
    perror("opendir");
    return 1;
  }

  struct dirent *entry;
  while ((entry = readdir(d)) != NULL) {
    printf("%s\n", entry->d_name); // Print each entry
  }

  closedir(d);
  return 0;
}
