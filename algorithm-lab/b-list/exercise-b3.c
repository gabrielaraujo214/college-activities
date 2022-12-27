// Create a program that prompts the user to enter a numeric password and displays the message "Correct password" if the number entered is equal to 7852 and "Incorrect password" if contrary.

#include <stdio.h>

int main()
{
    int password;

    printf("Enter password: ");
    scanf("%i", &password);

    if (password == 7852)
        printf("Correct password\n");
    else
        printf("Incorrect password\n");

    return 0;
}