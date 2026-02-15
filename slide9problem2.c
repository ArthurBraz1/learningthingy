//read the .TXT nnamed purchaselist and make a total of the purchase amount.
#include <stdio.h>
#include <string.h>
int main(void){
FILE *file1;
file1 = fopen("purchaselist.txt","r");
float total = 0;
if(file1==NULL){printf("Failure to open");}
else{
    int amount;
    float cost;
    while(fscanf(file1, "%*s %d %f", &amount, &cost) == 2){
    // the logic here works that it'll scan the lines and if it finds groups of these variables that are not 3 lines it'll cut
    // note that %*s commands the code to read the string but not commit to memory.
    // therefore on the conditions it'll be == 2 not == 3, and i wont have to include [...],product, &amount, &cost)[...]
    total = total + cost*amount;
    }
}

printf("The total is %.2f\n", total);

}