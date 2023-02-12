//Pede ao usuario uma senha se estiver certa o acesso é permitido. Maria Cristina Fabiane. 31/03/2022

#include<stdio.h>

int main(void)
{
    int senha;

    printf ("Digite a senha ( 5 digitos): ");
    scanf ("%d", &senha);

    if (senha == 12345)
    {
        printf ("Acesso permitido!");
    }
    else
    {
     printf ("Acesso negado !");
    }

     return 0;

}
