//country A has 90 million growth @ 3.5%, country B has 140 million growth @ 1%
// how long until country A overtakes country B in pop?
#include <stdio.h>
int main(void){
    int countrya = 900000000;
    int countryb = 1400000000;
    int counter = 0;
    while(countrya<countryb){
        countrya=countrya*1.035;
        countryb=countryb*1.01;
        counter++;
    }
printf("the amount of years it takes for country A to overtake B is %i\n", counter);


}