#include <stdio.h>
#include <stdlib.h>

int main ()
{
   int hora, minuto, segundo, segtotais;

    printf("Digite o horário atual(hh:mm:ss):");
    scanf("%i:%i:%i", &hora, &minuto, &segundo);

    segtotais = 0;
    segtotais = segtotais + hora*3600;
    segtotais = segtotais + minuto*60;
    segtotais = segtotais + segundo;

    printf("já se passaram %i segundos desde que o dia começou\n", segtotais);
}