#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    i = n;
    while (i >= 0)
    {
        printf("%d", i);
        i = i - 1;
    }
}