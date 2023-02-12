//identifica se um numero de 4 digitos e palindromo ou não. Maria C. Fabiane. 02/04/2022
#include<stdio.h>
int main(void)
{
    int num, dig1, dig2, dig3, dig4;

    printf("Insira um numero de quatro digitos: ");
    scanf ("%d", & num);

    dig1 = num/1000;
    dig2 = num%1000/100;
    dig3 = num%1000%100/10;
    dig4 = num%10;5

    if ((dig1==dig4) && (dig2==dig3))
    {
        printf("Esse numero eh palindromo");
    }
    else
    {
        printf("Esse numero nao eh palindromo");
    }
    return 0;
}
