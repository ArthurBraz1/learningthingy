// reads 3 int values, and calculate the roots on bhaskara
#include <stdio.h>
#include <math.h>
int main(){
    int a;
    int b;
    int c;
    printf("insert a\n");
    scanf("%i", &a);
    printf("insert b\n");
    scanf("%i", &b);
    printf("insert c\n");
    scanf("%i", &c);
    int delta = pow(b,2)-4*a*c;
    
    
    if (a>0 && delta>=0){
        double root1 = (-b +sqrt(delta))/2;
        double root2 = (-b -sqrt(delta))/2;
        if(root1 == root2){
            printf("the double roots of the equation are %.2lf\n", root1);
        }else{
            printf("The roots of the equation are %.1lf and %.2lf\n", root1, root2);
        }
    }else if(delta <0){
        printf("roots belong to complex plane\n");
    
    }else{
        printf("please put a>0\n");
        }
}