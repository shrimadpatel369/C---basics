#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int v;
  struct Node * next;
};

struct Node * head = NULL;

void printList();
struct Node * createNode(int v);

int main() {
  printList();
  head = createNode(10);
  printList();
  head->next = createNode(20);
  printList();
  head->next->next = createNode(30);
  printList();
  free(head->next->next);
  free(head->next);
  free(head);
  //printList();
}

void printList()
{
  if (head == NULL)
  {
      printf("List empty\n");
      return;
  }
  printf("Printing Linked List\n");
  struct Node * temp = head;
  while (temp != NULL)
  {
      printf("%d\n",temp->v);
      temp = temp->next;
  }
}

struct Node * createNode(int v)
{
  struct Node* temp = (struct Node *)malloc(sizeof(struct Node));
  temp->v = v;
  temp->next = NULL;
  return temp;
}