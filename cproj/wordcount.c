#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int c, words = 0;
  bool inWord = false;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      inWord = false;
    } else if (!inWord) {
      inWord = true;
      words++;
    }
  }
  printf("Words: %d\n", words);
  return 0;
}
