// Write a program that reads a text with 10 letters and displays this text in order inverted on the screen.

#include <stdio.h>
#include <string.h>

#define SIZE 10

int main()
{
    int i;
    char text[SIZE];

    scanf("%s", text);

    for (i = strlen(text) - 1; i >= 0; i--)
        printf("%c", text[i]);

    return 0;
}