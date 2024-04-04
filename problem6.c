#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x1, x2, y1, y2;
    float dis, a;

    printf("Vamos calcular a distancia entre dois pontos!\nPara começar, digite as coordenadas do primeiro ponto(x1,y1):");
    scanf("%d,%d", &x1, &y1);
    printf("\nAgora, as coordenadas do segundo ponto (x2, y2):");
    scanf("%d,%d", &x2, &y2);

    dis = pow(x1 - x2, 2) + pow(y1 - y2, 2);
    //para melhor entendimento, vou tirar a raíz da soma em expressões diferentes.
    dis = pow(dis, 1.0/2);

    //inclinação = a
    a = (y2 - y1);
    //estava tentando fazer a divisão em uma só expressão e não estava dando certo, então optei por realizá-la depois.
    a = a / (x2 - x1);

    printf("\n\na distância entre os pontos (%d, %d) e (%d, %d) será igual a %.2f. A inclinação da reta formada a partir dos dois pontos é igual a %.2f\n\n", x1, y1, x2, y2, dis, a);
        printf("o algoritmo não dará certo quando a distancia entre os dois pontos for igual a zero, pois teremos uma divisão 0/0 (erro)\n");

    return 0;
}