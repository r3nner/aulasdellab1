#include <stdio.h>
#include <stdlib.h>

int main ()
{
   int hora, minuto, segundo, segtotais, temprestante;

    printf("Digite o horário atual(hh:mm:ss):");
    scanf("%i:%i:%i", &hora, &minuto, &segundo);

    segtotais = 0;
    segtotais = segtotais + hora*3600;
    segtotais = segtotais + minuto*60;
    segtotais = segtotais + segundo;
    temprestante = 24*3600 - segtotais;

    printf("faltam %i segundos para o dia acabar\n", temprestante);
}