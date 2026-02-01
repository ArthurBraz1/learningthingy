#include <stdio.h>
int main(void){
    int str = 100;
    char name[200];
    int age;
    char country[196];
printf("Insert your name.\n");
fgets(name, str, stdin);
printf("Insert your country\n");
fgets(country, str, stdin);    
printf("Insert your age.\n");
scanf("%i", &age);
printf("You are %s, you are %i years old, and you are from %s\n", name, age, country);



}