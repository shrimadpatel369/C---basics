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
int menu();
int isValidKey(int k);
int deleteNode(int v);
void handleInsert();
void handlePrint();
void handleDelete();
void freeList();


int main() {
   int k = menu();
  while (k != 4)
  {
      switch (k)
      {
          case 1: handleInsert(); break;
          case 2: handleDelete(); break;
          case 3: handlePrint(); break;
          default: printf("Error Aborting Program\n");
                   exit(-1);
                   break;
      }
      k = menu();
  }
  freeList();
}

void handleInsert()
{
  int v;
  printf("Enter the value to Insert\n");
  scanf("%d",&v);
  struct Node * temp = createNode(v);
  insertNode(temp);
  printf("Please Enter to Continue...");
  getchar();
}

void handleDelete()
{
  int del;
  printf("Enter value to be deleted\n");
  scanf("%d",&del);
  int z = deleteNode(del);
  switch (z)
  {
      case -1: printf("Specified value was not found in the list\n");break;
      case -2: printf("List empty\n");break;
      default: printf("The value deleted is %d\n",z);
  }
  printf("Please Enter to Continue...\n");
  getchar();
}

void handlePrint()
{
  printList();
  printf("Please Enter to Continue...\n");
  getchar();
}

int isValidKey(int k)
{
  switch (k)
  {
  case 1: return 1;
  case 2: return 1;
  case 3: return 1;
  case 4: return 1;
  default:return 0;
  }
}

int menu()
{
  int x;
  printf("Welcome to LinkedList..\n");
  printf("Enter 1 to Insert a Node.\n");
  printf("Enter 2 to Delete a Node.\n");
  printf("Enter 3 to Print the List.\n");
  printf("Enter 4 to exit.\n");
  scanf("%d",&x);
  while (!isValidKey(x))
  {
      printf("Please Enter Valid Key\n");
      scanf("%d",&x);
  }
  return x;
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