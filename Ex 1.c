//Calcula o salario liquido apos o desconto do INSS. Maria Cristina Fabiane. 06/04/2022
#include <stdio.h>

int main (void)
{
    float salBruto, min;

    printf ("Escreva o valor do salario minimo: ");
    scanf ("%f", & min);
    printf ("Escreva o seu salario bruto: ");
    scanf ("%f", &salBruto);

    if (salBruto<= 3*min)
    {
        printf ("Seu salario depois do desconto de 8%% de INSS sera de: %.2f",salBruto*0.92);
    }
    else if (salBruto > 3*min)
    {
        printf ("Seu salario depois do desconto de 10%% do INSS sera de: %.2f", salBruto*0.90);
    }
    return 0;
}
