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
void insertNode(struct Node * n);
void freeList();

int main() {
   int v;
  printf("Enter value..: ");
  scanf("%d",&v);
  while (v != -1)
  {
      insertNode(createNode(v));
      printf("Enter value..: ");
      scanf("%d",&v);
  }
  printList();
  freeList();
  return 0;
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

void insertNode(struct Node * n)
{
  if (head == NULL)
  {
      head = n;
      return;
  }
  struct Node *temp = head;
  while (temp->next != NULL)
  {
      temp = temp->next;
  }
  temp->next = n;
}

void freeList()
{
  while (head != NULL)
  {
      struct Node * temp = head;
      head = head->next;
      free(temp);
  }
  head = NULL;
}