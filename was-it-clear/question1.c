#include <stdio.h>

int main()
{
    char sexo, idade;

    scanf("%i", &idade);
    getchar();
    scanf("%c", &sexo);

    if (idade < 14)
    {
        printf("Criança\n");
    }
    else if (idade < 21)
    {
        printf("Adolescente\n");
    }
    else if (sexo == 'm' || sexo == 'M')
    {
        printf("Homem\n");
    }
    else
    {
        printf("Mulher\n");
    }
}