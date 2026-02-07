#include <stdio.h>
#include <math.h>
int main(void){
    double salary;
    printf("Please insert your salary\n");
    scanf("%lf",&salary);
    if(salary < 500){
        salary = 1.15*salary;
        printf("Your readjustment was 15 percent, your new salary is %.2lf\n", salary);
    } else if(salary >= 500 && salary <=1000){
        salary = 1.10*salary;
        printf("Your readjustment was 10 percent, your new salary is %.2lf\n", salary);
    } else if(salary>1000){
        salary = 1.05*salary;
        printf("Your readjustment was 5 percent, your new salary is %.2lf\n", salary);
    } else {
        printf("Please insert a valid salary amount\n");
    }
}