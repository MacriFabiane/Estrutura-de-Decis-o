// Calcula com base na renda a quantidade de imposto de renda a ser pago. Maria C. Fabiane. 02/04/2022
#include<stdio.h>
int main (void)
{
    float renda, aliquota;

    printf("Digite sua renda mensal: ");
    scanf("%f", &renda);
    if (renda<=10000 && renda>0)
    {
       printf("Voce nao precisa pagar imposto");
    }
    else if (renda>10000 && renda<=25000)
    {
        aliquota = renda*0.10;
        printf("Voce pagara %.2f reais de imposto", aliquota);
    }
    else if (renda>=25001)
    {
        aliquota = renda*0.25;
        printf ("Voce pagara %.2f reais de imposto",aliquota);
    }
    else if (renda<=0)
    {
        printf ("Nao foi possivel realizar o calculo.\nVoce informou um valor negativo ou nenhum. Tente novamente.");
    }
    return 0;
}
