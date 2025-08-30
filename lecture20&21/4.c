#include <stdio.h>
#include <stdlib.h>

struct Node
{
   int v;
   struct Node * next;
};

int main() {
  
   struct Node * head = NULL;
   head = (struct Node *)malloc(sizeof(struct Node));
   head->v = 10;
   head->next = NULL;

   head->next = (struct Node *)malloc(sizeof(struct Node));
   head->next->v = 20;
   head->next->next = NULL;

   head->next->next = (struct Node *)malloc(sizeof(struct Node));
   head->next->next->v = 30;
   head->next->next->next = NULL;

   printf("%d\n",head->v);
   printf("%d\n",head->next->v);
   printf("%d\n",head->next->next->v);
   free(head->next->next);
   free(head->next);
   free(head);
}