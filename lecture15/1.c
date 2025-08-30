#include <stdio.h>

struct complex{
    double real;
    double imag;
};

int main(){
    struct complex s1;
    s1.real = 10;
    s1.imag = 20;
    printf("%.2f\n",s1.real);
    printf("%.2lf\n",s1.imag);
}
