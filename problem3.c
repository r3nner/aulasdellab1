#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, n100, n50, n20, n10, n5, sobra;
    printf("qual é o valor do troco a ser devolvido?");
    scanf("%i", &valor);
    
    n100 = valor/100;
    sobra = valor%100;
    n50 = sobra/50;
    sobra = sobra%50;
    n20 = sobra/20;
    sobra = sobra%20;
    n10 = sobra/10;
    sobra = sobra%10;
    n5 = sobra/5;
    sobra = sobra%5;

    printf("você terá que devolver:\n");
    if (n100 >0)
    {
        printf("%i notas de 100\n", n100);
    }
    if (n50 >0)
    {
        printf("%i notas de 50\n", n50);
    }
    if (n20 >0)
    {
        printf("%i  notas de 20\n", n20);
    }
    if (n20 >0)
    {
    printf("%i  notas de 20\n", n20);
    }
    if (n10 >0)
    {
    printf("%i  notas de 10\n", n10);
    }
    if (n5 >0)
    {
    printf("%i  notas de 5\n", n5);
    }
    if (sobra >0)
    {
    printf("%i moedas de 1 real\n", sobra);
    }
    return 0;
}