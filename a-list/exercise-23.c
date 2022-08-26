#include <stdio.h>

int main()
{
    int cavalos;
    printf("Insira quantidade de cavalos: ");
    scanf("%i", &cavalos);
    int ferraduras = cavalos * 4;
    printf("Quantidade de ferraduras: %i\n", ferraduras);
    return 0;
}