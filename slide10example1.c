#include <stdio.h>
#include <string.h>
typedef struct Livros{
    char nome[100];
    char autor[100];
    char categoria[100];
    int ind;
} livro;
int main(void){
    livro livro1;
    strcpy(livro1.nome, "Harry Potter");
    strcpy(livro1.autor, "JK Rowling");
    strcpy(livro1.categoria, "Fantasia");
    livro1.id = 1;
    

}