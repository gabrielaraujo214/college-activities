#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese-brazilian");

    int dia, mes, ano, totaldias, diasatuais, diferenca, diasmes, diasfev;

    printf("Entre com o dia: ");
    scanf("%i", &dia);

    printf("Entre com o mês: ");
    scanf("%i", &mes);

    printf("Entre com o ano: ");
    scanf("%i", &ano);

    totaldias = 365;
    diasfev = 28;

    if ((ano % 4 == 0 && ano % 100 == 0) || ano % 400 == 0)
    {
        totaldias = 366;
        diasfev = 29;
    }

    if (mes == 1)
    {
        diasmes = 0;
    }
    else if (mes == 2)
    {
        diasmes = 31;
    }
    else if (mes == 3)
    {
        diasmes = 31 + diasfev;
    }
    else if (mes == 4)
    {
        diasmes = 31 + diasfev + 31;
    }
    else if (mes == 5)
    {
        diasmes = 31 + diasfev + 31 + 30;
    }
    else if (mes == 6)
    {
        diasmes = 31 + diasfev + 31 + 30 + 31;
    }
    else if (mes == 7)
    {
        diasmes = 31 + diasfev + 31 + 30 + 31 + 30;
    }
    else if (mes == 8)
    {
        diasmes = 31 + diasfev + 31 + 30 + 31 + 30 + 31;
    }
    else if (mes == 9)
    {
        diasmes = 31 + diasfev + 31 + 30 + 31 + 30 + 31 + 31;
    }
    else if (mes == 10)
    {
        diasmes = 31 + diasfev + 31 + 30 + 31 + 30 + 31 + 31 + 30;
    }
    else if (mes == 11)
    {
        diasmes = 31 + diasfev + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
    }
    else if (mes == 12)
    {
        diasmes = 31 + diasfev + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
    }
    return 0;
}