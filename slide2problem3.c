#include <stdio.h>
int main(void){

    double halved;
    double sum1;
    double sum2;
    double sum3;
    double sum4;
    double consumption;
    double distance;

printf("insert value to be halved\n");
scanf("%lf", &halved);
printf("insert the 1st of 4 numbers to be summed then averaged. \n");
scanf("%lf", &sum1);
printf("insert the 2nd of 4 numbers to be summed then averaged. \n");
scanf("%lf", &sum2);
printf("insert the 3rd of 4 numbers to be summed then averaged. \n");
scanf("%lf", &sum3);
printf("insert the 4tj of 4 numbers to be summed then averaged. \n");
scanf("%lf", &sum4);
printf("insert distance to be traveled by car\n");
scanf("%lf", &distance);
printf("insert car fuel consumption per kilometer\n");
scanf("%lf", &consumption);
double halvedresult = halved/2;
double total = sum1+sum2+sum3+sum4;
double average = total/4;
double fueltank = distance/consumption;
printf("The first number halved is %.2lf\n", halvedresult);
printf("The total of the 4 numbers inserted is %.1lf, and the average of them is %.2lf\n", total, average);
printf("Based on your data, there should be %.1lf liters of fuel in your fuel tank to last the trip", fueltank);


}