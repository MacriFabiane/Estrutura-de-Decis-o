//Oferece em um menu de opcoes o calculo do imposto e do novo salario de acordo com o salrio atual. Maria C.Fabiane 02/04/2022
#include<stdio.h>
int main (void)
{
    float salario, ir, novoSal;
    int (num);

    printf ("Insira o valor do salario do funciario: ");
    scanf ("%f", & salario);

    printf ("Selecione uma das opções: \n");
    printf ("1-Imposto\n");
    printf ("2-Novo salario\n");
    scanf("%d", &num);

    switch (num)
    {
        case (1):
          if (salario<1000)
            {
                ir = (salario*5/100);
                printf("O imposto a ser pago eh R$ %.2f", ir);
            }
           else if (salario>=1000 && salario<1500)
            {
                ir = (salario*0.10);
                printf("O imposto a ser pago eh R$ %.2f", ir);
            }
           else if (salario>=1500)
            {
                ir =(salario*0.15);
                printf("O imposto a ser pago eh R$ %.2f", ir);
            }
         break;
         case (2):
            if (salario<1000)
            {
                printf("O aumento do salario sera de R$ 75,00, entao o novo salario sera: %.2f ", salario+75);
            }
            else if (salario>=1000 && salario<1500)
            {
                printf("O aumento do salario sera de R$ 100,00, entao o novo salario sera: %.2f ", salario+100);
            }
            else if (salario>=1500)
            {
                printf("O aumento do salario sera de R$ 150,00, entao o novo salario sera: %.2f ", salario+150);
            }
         break;
         default :
            {
                printf ("Opcão invalida");
            }

        return 0;
    }
}
