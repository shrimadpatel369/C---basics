#include <stdio.h>
#include <stdlib.h>

struct Node
{
   int v;
   struct Node * next;
};

struct Node * head = NULL;
void printList();

int main() {
  
   printList();
   head = (struct Node *)malloc(sizeof(struct Node));
   head->v = 10;
   head->next = NULL;
   printList();
   head->next = (struct Node *)malloc(sizeof(struct Node));
   head->next->v = 20;
   head->next->next = NULL;
   printList();
   head->next->next = (struct Node *)malloc(sizeof(struct Node));
   head->next->next->v = 30;
   head->next->next->next = NULL;
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