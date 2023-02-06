// Write a program that reads the age, gender, and weight of players on a co-ed basketball team. At the end, print the average age and average weight of this team, separating between women and men.

#include <stdio.h>

int main()
{
    int age, average_agem, average_agef, pc, mc, fc, i;
    float weight, average_weightm, average_weightf;
    char sex, option;

    // While the user  want to quit the program (option != 'N' || option != 'n'), the program will loop
    do
    {
        average_agem = 0;
        average_agef = 0;
        average_weightm = 0;
        average_weightf = 0;
        mc = 0;
        fc = 0;

        // While the user don't enter a number greater than zero, the program will keep asking him/her to enter the amount of players in the team
        do
        {
            printf("Enter amount of players in the team: ");

            scanf("%i", &pc);

        } while (pc < 1);

        // Test
        // printf("%i\n", pc);

        // Clearing the buffer
        getchar();

        // Loop through every player and asks him a valid sex (M/F), age (> 0), and weight(> 0)
        for (i = 0; i < pc; i++)
        {
            // Asks for a valid sex (M/F)
            do
            {
                printf("Enter sex of player %i (M/F): ", i + 1);
                scanf("%c", &sex);

                // Test
                // printf("%c\n", sex);

                // Clearing the buffer
                getchar();

            } while (sex != 'M' && sex != 'm' && sex != 'F' && sex != 'f');

            // Asks for a valid age (> 0)
            do
            {
                printf("Enter age of player %i: ", i + 1);
                scanf("%i", &age);

                // Test
                // printf("%i\n", age);

            } while (age < 0);

            // Asks for a valid weight (> 0)
            do
            {
                printf("Enter weight of player %i: ", i + 1);
                scanf("%f", &weight);

                // Test
                // printf("%f\n", weight);

                // Clearing the buffer
                getchar();

            } while (weight < 0);

            // If the player is male, it'll add the male counter, age and weight to calculate the averages
            if (sex == 'M' || sex == 'm')
            {
                mc++;

                average_agem += age;

                average_weightm += weight;
            }
            // If the player is female, it'll add the female counter, age and weight to calculate the averages
            else if (sex == 'F' || sex == 'f')
            {
                fc++;

                average_agef += age;

                average_weightf += weight;
            }
        }

        // Calculating the averages, and using if's to prevent division by zero
        if (mc > 0)
        {
            average_agem = average_agem / mc;

            average_weightm = average_weightm / mc;
        }
        if (fc > 0)
        {
            average_agef = average_agef / fc;

            average_weightf = average_weightf / fc;
        }

        // Printing the results
        printf("Average male age: %i\n", average_agem);

        printf("Average male weight: %f\n", average_weightm);

        printf("Average female age: %i\n", average_agef);

        printf("Average female weight: %f\n", average_weightf);

        // Asking if the user want to continue using the program
        printf("Do you want to continue? (Y/N) ");
        scanf("%c", &option);

        // Test
        // printf("%c\n", option);

        // Clearing the buffer
        getchar();

    } while (option != 'N' && option != 'n');

    return 0;
}