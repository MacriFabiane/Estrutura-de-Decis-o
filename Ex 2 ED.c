
#include<stdio.h>

int main (void)
{
    int num;

    printf ("Digite um numero: ");
    scanf ("%d",&num);

    if (num>10)
    {
        printf ("Numero maior que 10!");
    }
    else if (num<10)
    {
        printf ("Numero menor que 10!");
    }
    else
    {
    printf ("Numero igual a 10!");
    }
 return 0;

}
