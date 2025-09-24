#include <stdio.h>
#include <stdlib.h>

// Node structure for linked list
struct Node {
  int data;
  struct Node *next; // Pointer to next node
};

int main() {
  struct Node *head = malloc(sizeof(struct Node));
  head->data = 10;
  head->next = malloc(sizeof(struct Node));
  head->next->data = 20;
  head->next->next = NULL;

  struct Node *current = head;
  while (current != NULL) {
    printf("%d -> ", current->data);
    current = current->next;
  }
  printf("NULL\n");

  // Free memory
  free(head->next);
  free(head);
  return 0;
}
