//reads string, counts how many characters in string are equal to a, substitutes a's to b's, also print how many characters were modified.
#include <stdio.h>
#include <string.h>
int main(void){

    printf("Insert the string to be processed\n");
    char sentence[100];
    fgets(sentence,100,stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
    int counter;
    int switches = 0;
    int sizeofstring =strlen(sentence);
    for(counter=0; counter<sizeofstring; counter++){
        if(sentence[counter] == 'a' || sentence[counter] == 'A'){
             sentence[counter]= 'b';
            switches++;

        }
    }
    printf("The new string is '%s' ", sentence), printf("and the amount of letters switched is %i\n", switches);    

}
