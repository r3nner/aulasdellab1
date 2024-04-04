#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x1, x2, y1, y2, r1, r2;
    float dis;

    printf("Vamos analisar se dois círculos se intersectam ou não!\nPara começar, digite as coordenadas do primeiro centro, juntamente com o raio do círculo(x1,y1 r1):");
    scanf("%d,%d%d", &x1, &y1, &r1);
    printf("\nAgora, as coordenadas do segundo centro e o raio do círculo(x2, y2 r2):");
    scanf("%d,%d%d", &x2, &y2, &r2);

    //como no outro problema, vou calcular a distancia entre os dois pontos, mas agora sendo os centros dos raios também.
    dis = pow(x1 - x2, 2) + pow(y1 - y2, 2);
    //para melhor entendimento, vou tirar a raíz da soma em expressões diferentes.
    dis = pow(dis, 1.0/2);


    
    if (dis > r1 + r2)
    {
        printf("os raios não se intersectam em nenhum ponto\n\n");
    }
    else if (dis = r1 + r2) 
    {
        printf("os dois círculos se intersectam em um ponto\n\n");
    }   
    else
    {
        printf("os dois raios se intersectam em mais de um ponto\n\n");
    }

    return 0;
}