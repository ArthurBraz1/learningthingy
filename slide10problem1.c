//the program has to store book info of 10 books
//they have to have title, author, category and a unique id. 
#include <stdio.h>
#include <string.h>
typedef struct Books{
    char Title[100];
    char Author[100];
    char Category[100];
    int id;
} book;
int main(void){
book bookvector[10];
for (int i = 0; i < 10; i++)
{
    printf("Insert the title of the book\n");
    fgets(bookvector[i].Title, 100, stdin);
    printf("Insert the author of the book\n");
    fgets(bookvector[i].Author, 100, stdin);
    printf("Insert the category of the book\n");
    fgets(bookvector[i].Category, 100, stdin);;
    printf("Insert a unique id for the book\n");
    scanf("%i", &bookvector[i].id);
    getchar();
}
for (int i = 0; i < 10; i++)
{
int booknumber = i+1;
printf("For book %i\n", booknumber);
printf("The Author is %s\n", bookvector[i].Author);
printf("The book Title is %s\n", bookvector[i].Title);
printf("The book category is %s\n", bookvector[i].Category);
printf("The unique book id is %i\n", bookvector[i].id);
}

}
