#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, root1, root2;

    printf("Enter value of A: ");
    scanf("%f", &a);

    printf("Enter value of B: ");
    scanf("%f", &b);

    printf("Enter value of C: ");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;
    printf("Delta: %f\n", delta);

    root1 = ((b * -1) + sqrt(delta)) / (2 * a);

    root2 = ((b * -1) - sqrt(delta)) / (2 * a);

    printf("The roots are: %f and %f", root1, root2);
}