#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 50

int main()
{
    setlocale(LC_ALL, "");

    int i, j, contvog = 0, contcon = 0, evogal = 0;
    char palavra[TAM], vogais[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', '\0'};

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (i = 0; i < strlen(palavra); i++)
    {
        evogal = 0;

        for (j = 0; j < strlen(vogais); j++)
            if (palavra[i] == vogais[j])
            {
                contvog++;
                evogal = 1;
            }

        if (evogal == 0)
            contcon++;
    }

    printf("Vogais: %i\n", contvog);
    printf("Consoantes: %i\n", contcon);

    return 0;
}
