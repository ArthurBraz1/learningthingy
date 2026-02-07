#include <stdio.h>
int main(void){
    int value;
    int i = 0;
    int validinterval = 0;
    printf("Select value\n");
    while(i<10){
        scanf("%i", &value);
        i++;
        if(value >=10 && value <=20){
            validinterval++;
        }
    }
   int invalidinterval = i-validinterval;
    printf("You had %i numbers inside the interval, and %i outside",validinterval, invalidinterval);

}
