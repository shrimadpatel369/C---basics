#include <stdio.h>
#include <stdlib.h>

int num = 0;

void data(){
    printf("Enter how many numbers you want:");
    scanf("%d",&num);
    printf("\n");
    int*  p = (int*)malloc(sizeof(int)*num);
    for (int i = 0; i < num ;i++){
      printf("Enter the %d element: ",i);
      scanf("%d",&p[i]);
  }
    printf("The number entered are:");
    printf("\n");
    for (int j = 0; j < num; j++){
        printf("%d\n",p[j]);
    }
    free (p);
}

int sum(int num, int data[]){
}

int main(){
    data();
    
}

