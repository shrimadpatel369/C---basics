#include <stdio.h>

int main(){
    int i;
    int j;
    int num;
    int isprime;
    printf("Enter any number to print prime factors:");
    scanf("%d", &num);

    printf("All Prime Factors of %d are : \n",num);
    for (i = 2; i <= num ; i++){
        if (num%i == 0){
            isprime = 1;
            for(j=2; j <= i/2; j++){
                if (i%j == 0){
                    isprime = 0;
                    break;
                }
            }
            if (isprime == 1){
                printf("%d ",i);
            }
        }
    }
}


