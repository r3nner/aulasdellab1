#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3] = {0};
    int choose;
    char continuar;
    for (int b = 0; b < 3; b++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            printf("type the number of the [%d, %d] position:", b+1, j+1);
            scanf(" %d", &a[b][j]);
        }
    }

    for (int b = 0; b < 3; b++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %i ", a[b][j]);
        }
        printf("\n");
    }
    
    printf("\n\n\n");


    do
    {

        printf("O que você deseja fazer agora\n");
        printf("[1]mostrar diagonal principal\n[2]mostrar triangulo superior\n[3]mostrar triangulo inferior\n[4]sair\n");
        scanf(" %i", &choose);
            printf("\n\n");
        switch (choose)
        {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (i == j)
                    {

                        printf("%i", a[i][j]);
                    }
                    else
                    {
                        printf("    ");
                    }
                }
                printf("\n");
            }
            break;


        case 2:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3 ; j++)
                {
                    if (i > j)
                    {
                        printf("%i", a[i][j]);
                    }

                    else
                    {
                        printf("    ");
                    }
                }
                printf("\n");
            }
            break;
            printf("\n\n\n");
        case 3:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (i < j)
                    {

                        printf("%i", a[i][j]);
                    }
                    else
                    {
                        printf("  ");
                    }
                    printf("\n");
                }
                printf("\n");
            }
            break;
        }
         printf("\n\n\n");
         getchar();
         printf("Você deseja continuar?[s][n]\n");
         scanf("%c", &continuar);
    }while (continuar == 's');

      return 0;


}


