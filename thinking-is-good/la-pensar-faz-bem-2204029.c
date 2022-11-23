#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float peso_na_terra, peso_em_marte;
    printf("Digite seu peso: ");
    scanf("%f", &peso_na_terra);
    peso_em_marte = peso_na_terra * 0.38;
    printf("Seu peso em marte seria: %.3f kg\n", peso_em_marte);
    return 0;
}