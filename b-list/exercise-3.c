#include <stdio.h>

int main()
{
    float password;
    printf("Enter password: ");
    scanf("%f", &password);
    if (password == 7852)
    {
        printf("Correct password\n");
    }
    else
    {
        printf("Incorrect password\n");
    }
    return 0;
}