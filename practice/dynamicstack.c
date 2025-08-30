#include<stdio.h>
#include<stdlib.h>

int data[5];
int top = 5;

struct Node
{
  int v;
  struct Node * next;
};

struct Node * head = NULL;

void print();
void push(struct Node * n);
int pop();
int peek();
int isValidKey(int k);
int menu();
void handlePush();
void handlePop();
void handlePrint();
void handlePeek();

int main(){
 int k = menu();
 while (k != 5)
 {
     switch (k)
     {
         case 1: handlePush(); break;
         case 2: handlePop(); break;
         case 3: handlePrint(); break;
         case 4: handlePeek(); break;
         default: printf("Error Aborting Program\n");
                  exit(-1);
                  break;
     }
     k = menu();
 }
}

void print(){
   printf("Printing Stack\n");
   if(head==NULL){
       printf("\tStack is empty\n");
       return;
   }
   struct Node * temp = head;
   while (temp != NULL){
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

void push(struct Node * n){
   if(head==NULL){
      head = n;
       printf("\tStack is full\n");
       return;
   }
   struct Node *temp = head;
   while (temp->next != NULL){
      temp = temp->next;
   }
   temp->next = n;
   top--;
   //data[top]= n;
}

int pop(){
   if(top==5){
       printf("\tStack is empty\n");
       return -1;
   }
   else{
       int v=data[top];
       top++;
       return v;
   }
}

int peek(){
   if(top==5){
       printf("\tStack is empty\n");
       return -1;
   }
   else{
       return data[top];
   }
}

int isValidKey(int k)
{
   return (k>=1 && k<=5);
}

int menu()
{
   int x;
   printf("Welcome to Stack..\n");
   printf("Enter 1 to Push.\n");
   printf("Enter 2 to Pop.\n");
   printf("Enter 3 to Print.\n");
   printf("Enter 4 to Peek.\n");
   printf("Enter 5 to exit.\n");
   scanf("%d",&x);
   while (!isValidKey(x))
   {
       printf("Please Enter Valid Key\n");
       scanf("%d",&x);
   }
   return x;
}

void handlePush()
{
   int v;
   printf("Enter the value to Push\n");
   scanf("%d",&v);
   struct Node * temp = createNode(v);
   push(temp);
   printf("Please Enter to Continue...");
   getchar();
}

void handlePop()
{
   int r = pop();
   printf("Enter value to be pop\n");
   scanf("%d",&r);
   switch (r){
      case -1: printf("Specified value was not found in the stack\n");break;
      case -2: printf("stack empty\n");break;
      default: printf("The value pop is %d\n",r);
  }
  printf("Please Enter to Continue...\n");
  getchar();
}

void handlePrint()
{
   print();
}  

void handlePeek()
{
   int p = peek();
   printf("peeked value is %d\n",p);
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
