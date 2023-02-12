//da um menu com uma serie de operaçõess a serem calculadas a partir dos numeros digitados. Maria C. Fabiane
#include<stdio.h>

int main (void)
{
    int num, num1, num2, num3;
    printf("Escreva um numero: ");
    scanf ("%d", &num1);
    printf("Escreva o segundo numero: ");
    scanf ("%d", &num2);
    printf("Escreva o terceiro numero: ");
    scanf ("%d", &num3);

    printf ("Agora escolha uma das opcoes do menu abaixo: \n\n");
    printf ("1-Mostra os numeros em ordem crescente \n");
    printf ("2-Mostra os numeros em ordem decrescente \n");
    printf ("3-Mostra os numeros que sao multiplos de 2 \n");
    scanf ("%d", &num);

    switch (num)
    {
          case 1:
            if (num1<num2<num3)
            {
                printf("Em ordem crescente: %d, %d, %d", num1,num2,num3);
            }
            else if (num1<num3<num2)
            {
                printf("Em ordem crescente: %d, %d, %d", num1,num3,num2);
            }
            else if (num2<num1<num3)
            {
                printf("Em ordem crescente: %d, %d, %d", num2,num1,num3);
            }
            else if (num2<num3<num1)
            {
                printf("Em ordem crescente: %d, %d, %d", num2,num3,num1);
            }
             else if (num3<num2<num1)
            {
                printf("Em ordem crescente: %d, %d, %d", num3,num2,num1);
            }
             else if (num3<num1<num2)
            {
                printf("Em ordem crescente: %d, %d, %d", num3,num1,num2);
            }
        break;
        case 2:
            if (num1>num2 && num2>num3)
            {
                printf("Em ordem decrescente: %d, %d, %d", num1,num2,num3);
            }
            else if (num1>num3 && num3>num2)
            {
                printf("Em ordem decrescente: %d, %d, %d", num1,num3,num2);
            }
            else if (num2>num1 && num1>num3)
            {
                printf("Em ordem decrescente: %d, %d, %d", num2,num1,num3);
            }
            else if (num2>num3 && num3>num1)
            {
                printf("Em ordem decrescente: %d, %d, %d", num2,num3,num1);
            }
            else if (num3>num2 && num2>num1)
            {
                printf("Em ordem decrescente: %d, %d, %d", num3,num2,num1);
            }
            else if (num3>num1 && num1>num2)
            {
                printf("Em ordem decrescente: %d, %d, %d", num3,num1,num2);
            }
        break;
        case 3:
            if (num1%2==0 && num2%2==0 && num3%2==0)
            {
                printf ("%d %d e %d sao multiplos de 2", num1,num2, num3);
            }
            else if (num1%2==0 && num2%2==0)
            {
                printf (" Apenas %d e %d sao multiplos de 2", num1,num2);
            }
            else if (num1%2==0 && num3%2==0)
            {
                printf (" Apenas %d e %d sao multiplos de 2", num1,num3);
            }
            else if (num2%2==0 && num3%2==0)
            {
                printf (" Apenas %d e %d sao multiplos de 2", num2,num3);
            }
            else if (num1%2==0)
            {
                printf (" Apenas %d eh multiplos de 2", num1);
            }
             else if (num2%2==0)
            {
                printf (" Apenas %d eh multiplos de 2", num2);
            }
             else if (num3%2==0)
            {
                printf (" Apenas %d eh multiplos de 2", num3);
            }
    }
    return 0;
}

