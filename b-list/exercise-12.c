int main()
{
    int a, b, c;

    printf("Enter first number: ");
    scanf("%i", &a);
    printf("Enter second number: ");
    scanf("%i", &b);
    printf("Enter third number: ");
    scanf("%i", &c);

    if (a < b && b < c)
    {
        printf("%i, %i, %i\n", a, b, c);
    }
    else if (a < c && c < b)
    {
        printf("%i, %i, %i\n", a, c, b);
    }
    else if (b < a && a < c)
    {
        printf("%i, %i, %i\n", b, a, c);
    }
    else if (b < c && c < a)
    {
        printf("%i, %i, %i\n", b, c, a);
    }
    else if (c < a && a < b)
    {
        printf("%i, %i, %i\n", c, a, b);
    }
    else
    {
        printf("%i, %i, %i\n", c, b, a);
    }
    return 0;
}