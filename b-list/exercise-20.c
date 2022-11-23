#include <stdio.h>

int main()
{
    int age;
    char sex;

    printf("Enter age:\n");
    scanf("%i", &age);
    getchar();
    printf("Enter sex:\n");
    scanf("%c", &sex);

    if (age < 0)
    {
        printf("Invalid input");
    }
    else if (age < 13)
    {
        printf("Child\n");
    }
    else if (age < 18)
    {
        printf("Teenager\n");
    }
    else if (sex == 'M' || sex == 'm')
    {
        printf("Man\n");
    }
    else if (sex == 'F' || sex == 'f')
    {
        printf("Woman\n");
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}