#include <stdio.h>

typedef struct {
  char title[20];
  float price;
} Book;

int main() {
  Book b1 = {"C Programming", 29.99};
  printf("Book: %s, Price: $%.2f\n", b1.title, b1.price);
  return 0;
}
