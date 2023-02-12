// Vai verificar se o numero é divisivel ou nao por 3, 2 e 5 em diferentes situacoes. Maria C. Fabiane 02/04/2022
#include<stdio.h>
int main(void)
{
    int num;

    printf ("Insira um numero: ");
    scanf("%d", &num);

    if ((num%3==0) && (num%5==0) && (num%2==0))
    {
        printf("%d eh divisivel por 2, por 3 e por 5", num);
    }
    else if ((num%3==0) && (num%5==0) && (!num%2==0))
    {
        printf("%d eh divisivel por 3 e por 5", num);
    }
    else if ((num%3==0) && (num%2==0) && (!num%5==0))
    {
        printf("%d eh divisivel por 3 e por 2", num);
    }
    else if ((num%2==0) && (num%5==0) && (!num%3==0))
    {
        printf("%d eh divisivel por 2 e por 5", num);
    }
    if  ((num%2==0) && (!num%5==0) && (!num%3==0))
    {
        printf("%d eh  somente divisivel por 2", num);
    }
    else if  ((!num%2==0) && (num%5==0) && (!num%3==0))
    {
        printf("%d eh  somente divisivel por 5", num);
    }
    else if  ((!num%2==0) && (!num%5==0) && (num%3==0))
    {
        printf("%d eh  somente divisivel por 3", num);
    }
    else if ((!num%2==0) && (!num%5==0) && (!num%3==0))
    {
        printf("%d nao eh divisivel nem por 2, nem por 3 e nem por 5", num);
    }
    return 0;
}
