#include <stdio.h>
#include <math.h>
int main(void){
    int a;
    int b;
    int c;
printf("Type the value of A");
scanf("%i", &a);
printf("Type the value of B");
scanf("%i", &b);
printf("Type the value of C");
scanf("%i", &c);
int delta = pow(b,2) -(4*a*c);
printf("The delta is %i", delta);




}