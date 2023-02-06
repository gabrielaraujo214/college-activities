// Write a program that asks for any word from the user and at the end prints how many vowels and how many consonants the word has. For simplicity, just consider unstressed words.

#include <stdio.h>
#include <string.h>

#define SIZE 50

int main()
{

    int i, j, contvow = 0, contcon = 0, isvowel = 0;
    char word[SIZE], vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', '\0'};

    printf("Enter a word: ");
    scanf("%s", word);

    for (i = 0; i < strlen(word); i++)
    {
        isvowel = 0;

        for (j = 0; j < strlen(vowels); j++)
            if (word[i] == vowels[j])
            {
                contvow++;
                isvowel = 1;
            }

        if (isvowel == 0)
            contcon++;
    }

    printf("Vowels: %i\n", contvow);
    printf("Consonants: %i\n", contcon);

    return 0;
}
