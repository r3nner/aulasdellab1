#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a, b, c, d, base, soma;
 printf("Vamos somar duas frações (a/b + c/d)\nDigite duas frações para somá-las(a/b) e (c/d):");
 scanf("%i/%i%i/%i", &a, &b, &c, &d);

    base = b*d;
    a = d*a;
    c = b*c;

    soma = a + c;

    for (int i = 1; i <= base; i++)
    {
        if (soma%i == 0 && base%i == 0)
        {
        soma = soma/i;
        base = base/i;
    }
    }
    printf("a soma das duas frações é igual a: %d/%d \n", soma, base);
    return 0;

}