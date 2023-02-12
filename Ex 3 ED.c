//confere se determinado numero esta presente no intervalo entre 5 e 20. Maria C. Fabiane. 01/04/2022
#include<stdio.h>

int main (void)
{
    int num;

    printf ("Informe um numero:");
    scanf("%d", &num);

    if (num>=5 && num<=20)
    {
        printf ("%d esta no intervalo entre 5 e 20", num);
    }
    else
    {
        printf(" %d esta fora do intervalo entre 5 e 20", num);
    }
    return 0;

}
