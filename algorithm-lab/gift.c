// PRESENTE
// Feliz dia do profissional de TI!
// 19/10/2023
// Made by Gabs

// ATIVIDADE
// Você foi contratado por uma grande instituição de ensino e tem como primeira missão
// o desenvolvimento de um programa que leia todas as notas de uma turma que possui 100 alunos
// e mostre a menor nota, a maior nota e a média das notas da sala.
// Para isso, escreva um programa em C que declare um vetor com 100 posições de números reais e faça
// um loop para ler cada uma das notas e guardá - las no vetor.
// No final, apresente os 3 itens solicitados

#include <stdio.h>
#include <locale.h>
#include <windows.h>

// Declarando a constante quantidade de alunos
// Altere aqui embaixo para testes com números menores
#define ALUNOS 100

int main()
{
    // Colocando o programa em português
    SetConsoleOutputCP(65001);

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

        // Declarando menor como o primeiro valor do vetor notas para evitar o erro de definir
        // menor = 0, não houver nota menor que 0, e o programa imprimir 0 como o menor número.
        // Assim ele funciona para valores positivos e negativos
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
}
