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