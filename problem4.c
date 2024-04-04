#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;
    printf("Digite uma data(dd/mm/aaaa):");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    if (mes == 2)
    {
        if (ano % 1000 == 0 || (ano % 4 == 0 && ano % 100 != 0))
        {
            if (dia < 29)
            {
                dia = dia + 1;
            }
            else
            {
                dia = 1;
                mes = mes + 1;
            }
        }
        else
        {
            if (dia < 27)
            {
                dia = dia + 1;
            }
            else
            {
                dia = 1;
                mes = mes + 1;
            }
        }
    }
    else
    {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        {
            if (dia < 31)
            {
                dia = dia + 1;
            }
            else
            {
                dia = 1;
                mes = mes + 1;

                if (mes > 12)
                {
                    mes = 1;
                    ano = ano + 1;
                }
            }
        }
        else
        {
            {
                if (dia < 30)
                {
                    dia = dia + 1;
                }
                else
                {
                    dia = 1;
                    mes = mes + 1;
                }
            }
        }
    }
    printf("a data do dia seguinte será: %i/%i/%i\n", dia, mes, ano);
    return 0;
}