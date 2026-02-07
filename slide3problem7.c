// 4 variaveis, se B > C ** D   > A && C+D > A+B && C>0 && D > 0 && A is even PRINT values accepted.
// check evne with a % 2
#include <stdio.h>
#include <math.h>
int main(void){


    int a, b, c, d;
    printf("insert a PLEASE \n");
    scanf("%i", &a);
    printf("INSERT B FUCK\n");
    scanf("%i", &b);
    printf("c\n");
    scanf("%i", &c);
    printf("d\n");
    scanf("%i",&d);
    int eventhing = a%2;
    if (b>c && d > a && c+d > a+b && c>0 && d>0 && eventhing == 0){
        printf("valid thingy wow!\n");
    } else {
        printf("invalid shite!");
    }

}

