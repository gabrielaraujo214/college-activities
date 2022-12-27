// In a TV show, a box containing several balls is used to play a game with the participants. The game consists of removing a ball from the box. For each ball there is a code and an associated score, as shown in the table below.

// Ball Code    Score
// 'P'          Earns 10 points
// 'B'          Earns 15 points
// 'V'          Does not win or lose
// 'A'          Lose 15 points
// 'L'          Lose 10 points

// Create a program that shows the value obtained in the draw for each ball drawn and asks the user if he wants to continue the game. At the end, the program should display:

// a) How many balls were drawn

// b) A Total score obtained by the player.

// Hint: To ask the user if he wants to continue use the options 'Y' and 'N' for yes and no respectively.

#include <stdio.h>

int main()
{
    char ball, option;
    int ball_count = 0, total = 0;

    // enquanto o usuário quiser jogar, o programa roda (enquanto option for diferente de 'N')
    do
    {
        printf("Enter ball: ");
        // lê a bola
        scanf("%c", &ball);

        // limpa o buffer pra n dar erro no próximo scanf
        getchar();

        // se a bola for igual alguma da lista, imprime mensagem, conta a quantidade de bolas + 1, e adiciona o valor da bola ao total
        switch (ball)
        {
        case 'P':
            printf("You won 10 points!\n");

            // adiciona 1 ao total de bolas escolhidas
            ball_count++;

            // adiciona o valor da bola à pontuação total
            total += 10;

            break;
        }

        printf("Quer continuar? ");
        // lê se o usuário de drogas quer continuar a jogar
        scanf("%c", &option);

        // limpa o buffer pra n dar erro no próximo scanf
        getchar();

    } while (option != 'N');

    printf("Bolas sorteadas: %i\n", ball_count);

    printf("Pontuacao total: %i\n", total);

    return 0;
}