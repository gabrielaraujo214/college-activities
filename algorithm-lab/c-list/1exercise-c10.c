// Write a program that reads the age, gender, and weight of players on a co-ed basketball team. At the end, print the average age and average weight of this team, separating between women and men.

#include <stdio.h>

int main()
{
    int age, average_agem, average_agef, gc, mc, fc, i;
    float weight, average_weightm, average_weightf;
    char sex, option;

    average_agem = 0;
    average_agef = 0;
    average_weightm = 0;
    average_weightf = 0;
    mc = 0;
    fc = 0;

    // While the user don't want to quit the program (option != 'Y' || option != 'y'), the program will loop
    do
    {
        // While the user don't enter a number greater than zero, the program will keep asking him/her to enter the amount of players in the team
        do
        {
            printf("Enter amount of players in the team: ");

            scanf("%i", &gc);

        } while (gc < 1);

        printf("%i\n", gc);

        // Clear the buffer
        getchar();

        // Loop through every player and asks him a valid sex (M/F), age (> 0), and weight(> 0)
        for (i = 0; i < gc; i++)
        {
            // Asks for a valid sex (M/F)
            do
            {
                printf("Enter sex of player %i (M/F): ", i + 1);
                scanf("%c", &sex);

                getchar();

                printf("%c\n", sex);

            } while (sex != 'M' && sex != 'm' && sex != 'F' && sex != 'f');

            // Asks for a valid age (> 0)
            do
            {
                printf("Enter age: ");
                scanf("%i", &age);

                printf("%i", age);

            } while (age < 0);
            // Asks for a valid weight (> 0)
        }

        printf("Do you want to quit the program? (Y/N) ");
        scanf("%c", &option);

        printf("%c\n", option);

    } while (option != 'Y' && option != 'y');

    return 0;
}