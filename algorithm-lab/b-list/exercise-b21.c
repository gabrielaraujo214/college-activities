// In a TV show, a box containing several balls is used to play a game. with the participants. The game consists of removing a ball from the box. For each ball there is a code and an associated score, as shown in the table below. elaborate a program that reads the drawn ball and shows the score obtained by the participant of the game.
// Ball Code    Score
// 'P'          Earns 10 points
// 'B'          Earns 15 points
// 'V'          Does not win or lose
// 'A'          loses 15 points
// 'L'          Lose 10 points

#include <stdio.h>

int main()
{
    char ball;

    printf("Enter ball code:\n");
    printf("(P) (B) (V) (A) (L)\n");
    scanf("%c", &ball);

    switch (ball)
    {
    case 'P':
        printf("You got 10 points!");

        break;

    case 'B':
        printf("You got 15 points!");

        break;

    case 'V':
        printf("You got nothing!");

        break;

    case 'A':
        printf("You lost 15 points!");

        break;

    case 'L':
        printf("You lost 10 points!");

        break;
    }

    return 0;
}