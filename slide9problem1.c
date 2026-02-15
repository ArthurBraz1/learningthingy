// write a program that reads from the users the names of 2 text files.
// then create a third text file with the contents of the first 1 together (first, then second)
#include <stdio.h>
#include <string.h>
int main(void){
    char file1content[20];
    char file2content[20];
    FILE *file1;
    FILE *file2;
    char line[100];
    printf("type the content of the first file (max 20)\n");
    file1 = fopen("firstfile.txt","w");
    if(file1 == NULL){printf("File 1 opening error\n");}
    else{
        fgets(file1content,20,stdin);
        file1content[strcspn(file1content, "\n")] = '\0';
        fprintf(file1,"%s\n",file1content);
        fclose(file1);
        printf("Successfully written to file 1\n");
    }
   
   
    printf("type the content of the second file (max 20)\n");
    file2 = fopen("secondfile.txt","w");
    if(file2 == NULL){printf("File 2 opening error\n");}
    else{
        fgets(file2content,20,stdin);
        file2content[strcspn(file2content, "\n")] = '\0';
        fprintf(file2,"%s\n",file2content);
        fclose(file2);
        printf("Successfully written to file 2\n");
    }
 FILE *file3;
 file1 = fopen("firstfile.txt","r");
 file3 = fopen("thirdfile.txt","w");
 if(file1 == NULL || file3 == NULL){printf("File opening error\n");}
 else{
    while(fgets(line,100,file1) != NULL){
        fprintf(file3, "%s", line);
    }
   fclose(file1);
   fclose(file3);



    

 }
 file2 = fopen("secondfile.txt","r");
 file3 = fopen("thirdfile.txt","a");
 if(file2 == NULL || file3 == NULL){printf("File opening error\n");}
 else{
    while(fgets(line,100,file2) != NULL){
        fprintf(file3, "%s", line);
    }
    fclose(file2);
    fclose(file3);

    file3=fopen("thirdfile.txt","r");
    if(file3 == NULL){printf("File opening error");}
    else{
        printf("Contents of the third file:\n");
        while(fgets(line,100,file3) != NULL){
            printf("%s", line);

        }
    }
    fclose(file3);
 }
}

