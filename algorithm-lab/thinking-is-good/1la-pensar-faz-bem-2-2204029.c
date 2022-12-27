// You were hired by a large educational institution and your first mission is to develop a program that reads all the grades of a class that has 100 students and shows the lowest grade, the highest grade and the average of the grades in the room. To do so, write a program in C that declares an array with 100 positions of real numbers and makes a loop to read each of the notes and store them in the array. At the end, present the 3 requested items.

#include <stdio.h>

// Declarando a constante quantidade de alunos
// Altere aqui para testes menores
#define ALUNOS 100

int main()
{
    float notas[ALUNOS], menor, maior, media;

    // Declarando o contador
    int i;

    maior = 0;
    media = 0;

    // Loop entre todos os alunos
    for (i = 0; i < ALUNOS; i++)
    {
        // Pede a nota do aluno e guarda no vetor
        printf("Digite a nota do aluno %i: ", i + 1);
        scanf("%f", &notas[i]);

        // Teste de saída
        // printf("Nota: %f\n", notas[i]);

        // Declarando menor como o primeiro valor do vetor notas para evitar o erro de definir menor = 0, não houver nota menor que 0, e o programa imprimir 0 como o menor número. Assim ele funciona para valores positivos e negativos
        if (i == 0)
            menor = notas[i];

        // Salvar a menor nota
        if (notas[i] < menor)
        {
            menor = notas[i];
        }

        // Salvar a maior nota
        if (notas[i] > maior || maior == 0)
        {
            maior = notas[i];
        }

        // Teste de saída
        // printf("Menor: %f\n", menor);
        // printf("Maior: %f\n", maior);

        // Soma os valores para fazer a média
        media += notas[i];
    }

    // Faz a divisão da média
    media = media / ALUNOS;

    // Imprime os resultados: menor nota, maior nota, e média
    printf("\nRESULTADOS\n");

    printf("Menor nota: %f\n", menor);

    printf("Maior nota: %f\n", maior);

    printf("Média: %f\n", media);

    return 0;
}
