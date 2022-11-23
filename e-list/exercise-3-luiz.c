#include <stdio.h>
#include <string.h>

#define size 10

// Essa função 'inverse' serve para inverter a ordem da string, e também para imprimi-la.
void inverse(char sample[])
{
    int i, j;
    char temp;
    for (i = size - 1; i >= 0; i--)
    { // size-1 -- É porque temos o máximo de 10 caracteres, e seus índices variam de min 0 a max 9.
        for (j = 0; j < size; j++)
        {
            temp = sample[j]; // Essa parte do código faz o uso do 'terceiro copo vazio' - temp
            sample[i] = sample[j];
            sample[i] = temp;
        }
        printf("%c", sample[i]);
    }
}

int main()
{
    char text[size] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'}; // Para teste do código

    // printf("Write a text.   Max -> 10 letters: \n");
    // gets(text);

    /*printf("Write a text.   Max -> 10 letters: \n");
    gets(text);*/

    // Essas duas linhas acima (em comentário) vão pedir que o usuário entre (uma string), e
    // gets' vai guardar ela no vetor text

    inverse(text);
    // essa linha chama a função 'inverse' usando como parâmetro nosso vetor/string 'text'

    return 0;
}