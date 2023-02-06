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

    do
    {
        printf("Enter ball: ");
        scanf("%c", &ball);
        getchar();

        switch (ball)
        {
        case 'P':
        case 'p':
            printf("You won 10 points!\n");

            ball_count++;

            total += 10;

            break;

        case 'B':
        case 'b':
            printf("You won 15 points!\n");

            ball_count++;

            total += 15;

            break;

        case 'V':
        case 'v':
            printf("You neither won or lost points!\n");

            ball_count++;

            break;

        case 'A':
        case 'a':
            printf("You lost 15 points!\n");

            ball_count++;
            total -= 15;

            break;

        case 'L':
        case 'l':
            printf("You lost 10 points!\n");

            ball_count++;

            total -= 10;

            break;

        default:
            printf("Invalid code!\n");

            break;
        }

        printf("Do you wanna continue? ");
        scanf("%c", &option);
        getchar();

    } while (option != 'N' && option != 'n');

    printf("Drawn balls: %i\n", ball_count);

    printf("Total score: %i\n", total);

    return 0;
}