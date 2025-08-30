#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int v;
  struct Node * next;
};

struct Node * head = NULL;

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

int deleteNode(int v)
{
  if (head == NULL)
  {
      return -2;
  }
  struct Node* leader = head;
  struct Node* follower = head;
  while (leader != NULL && leader->v != v)
  {
      follower = leader;
      leader = leader->next;
  }
  if (leader == NULL)
  {
      return -1;
  }
  if (leader == head)
  {
      head = head->next;
  }
  follower->next = leader->next;
  int temp = leader->v;
  free(leader);
  return temp;
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
  printf("\n");
  int del;
  printf("Enter value to be deleted\n");
  scanf("%d",&del);
  printf("\n");
  int z = deleteNode(del);
  switch (z)
  {
    case -1: printf("Specified value was not found in the list\n");
    break;
    case -2: printf("List empty\n");
    break;
    default: printf("The value deleted is %d \n",z);
  }
  printf("\n");
  printList(); 
  freeList();
}









