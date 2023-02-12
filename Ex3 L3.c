//Faz operacoes com os digitos de um numero, e com seu inverso.
#include<stdio.h>
int main (void)
{
    int num, d1,d2,d3,d4,d5, soma, inverso;
    printf ("Insira um numero de 5 digitos: \n");
    scanf ("%d", &num);

    d1=num/10000;
    d2=num%10000/1000;
    d3=num%10000%1000/100;
    d4=num%10000%1000%100/10;
    d5=num%10;

    soma=d1+d2+d3+d4+d5;

    if (soma%2==0)
    {
        printf ("A soma eh %d (par)\n", soma);
    }
    else if (soma%3==0)
    {
        printf ("A soma eh %d (impar)\n", soma);
    }

    inverso=d5*10000+d4*1000+d3*100+d2*10+d1;

    if (inverso%5==0)
    {
        printf ("O inverso eh %d (multiplo de 5)\n");
    }
    if (inverso%5!=0)
    {
        printf ("O inverso eh %d (nao multiplo de 5)\n");
    }
    return 0;
}
