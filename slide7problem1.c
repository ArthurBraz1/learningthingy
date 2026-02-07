#include <stdio.h>
#include <string.h>
int main(void){
    char first[20];
    char second[20];
    printf("Insert the first string\n");
    fgets(first, 20, stdin);
    first[strcspn(first, "\n")] = '\0';
    printf("Insert the second string\n");
    fgets(second,20,stdin);
    second[strcspn(second, "\n")] = '\0';
    int counter;
    int sizeofstring1= strlen(first);
    int sizeofstring2= strlen(second);
    printf("The even characters of the first one are: ");
    for(counter =1; counter<sizeofstring1;){
        printf("%c ",first[counter]);
        counter = counter+2;
    }
    printf("\n");
    printf("The even characters of the second one are: ");
    for(counter =1; counter<sizeofstring2;){
        printf("%c ",second[counter]);
        counter=counter+2;
    }
    printf("\n");

}