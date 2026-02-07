// print the square of every even number between 1 and 1000
#include <stdio.h>
#include <math.h>
int main(void){
    int counter = 0;
    while(counter<=1000){
        counter++;
        int checker = counter%2;
        if(checker==0){
            int power= pow(counter,2);
            printf("%d\n", power);

        }
    }
}