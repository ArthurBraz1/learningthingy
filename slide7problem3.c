#include <stdio.h>
#include <string.h>
int main(void){
    printf("Please insert the string to be analyzed\n");
    char tobeanalyzed[100];
    fgets(tobeanalyzed,100,stdin);
    tobeanalyzed[strcspn(tobeanalyzed, "\n")] = '\0';
    int sizeofstring = strlen(tobeanalyzed);
    int i;
    int notmirrored=0;
    for(i=0; i<sizeofstring && notmirrored == 0; i++){
        int opposite = sizeofstring - i -1;
        if(tobeanalyzed[i] != tobeanalyzed[opposite]){
            notmirrored=1;
        }
        }
        if(notmirrored == 1){
            printf("The word is not mirrored and cannot be reversed\n");
        }else{
            printf("The word is mirrored and can be reversed\n");
        }
    }

