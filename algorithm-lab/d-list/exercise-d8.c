// Write a program that requests text from the user and prints the text by swapping the vowels by the character "?".

#include <stdio.h>
#include <string.h>

#define SIZE 100

int main()
{

    int i, j;
    char text[SIZE], vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    printf("Enter text: ");
    gets(text);

    for (i = 0; i < strlen(text); i++)
        for (j = 0; j < strlen(vowels); j++)
            if (text[i] == vowels[j])
                text[i] = '?';

    puts(text);

    return 0;
}
