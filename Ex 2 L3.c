//Simula o caixa eletronico de um banco
#include <stdio.h>

int main (void)
{
    int saque, nota1, nota5, nota10, nota50, nota100;

    printf ("Saque minimo = R$10,00     Saque maximo = R$600,00\n");
    printf ("Isira o valor do saque (apenas valores inteiros): ");
    scanf ("%d", &saque);

    nota100=saque/100;
    nota50=saque%100/50;
    nota10=saque%100%50/10;
    nota5=saque%100%50%10/5;
    nota1=saque%100%50%10%5/1;

    if (saque>=10 && saque<=600)
    {
        printf("Valores e quantidades das notas a serem sacadas: \n");
        printf("Notas de R$ 100,00: %d\n ", nota100);
        printf("Notas de R$  50,00: %d\n ", nota50);
        printf("Notas de R$  10,00: %d\n ", nota10);
        printf("Notas de R$   5,00: %d\n ", nota5);
        printf("Notas de R$   1,00: %d\n ", nota1);
    }
    else
    {
        printf ("Limite de saque nao permitido");
    }
return 0;
}
