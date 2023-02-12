// Escala tres numeros em menor, maio, e menor. Maria C. Fabiane. 01/04/2022
#include<stdio.h>

int main (void)
{
    int num1, num2, num3, maior, meio, menor;

    printf("Insira um numero: ");
    scanf("%d", &num1);
    printf("Insira outro: ");
    scanf("%d", &num2);
    printf("Insira mais um numero: ");
    scanf("%d", &num3);

    if (num1>=num2 && num1>=num3)
    {
        maior = num1;
    }
    else if (num2>=num1 && num2>=num3)
    {
        maior = num2;
    }
    else if (num3>=num1 && num3>=num2)
    {
        maior = num3;
    }
    if ((num2<=num1 && num2>=num3) || (num2<=num3 && num2>=num1))
    {
        meio = num2;
    }
    else if ((num1<=num2 && num1>=num3) || (num1>= num2 && num1<=num3))
    {
        meio = num1;
    }
    else if ((num3<=num2 && num3>=num1) || (num3>= num2 && num3<=num1))
    {
        meio = num3;
    }
    if (num1<num2 && num1<num3)
    {
        menor =num1;
    }
    if (num2<num1 && num2<num3)
    {
        menor =num2;
    }
    if (num3<num2 && num3<num1)
    {
        menor =num3;
    }

    printf(" O menor eh %d, o do meio eh %d e o maior eh %d", menor, meio, maior);
   return 0;

}
