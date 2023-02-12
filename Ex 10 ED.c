//calcula o salario liquido com o desconto do imposo de renda.Maria C. Fabiane 02/04/2022
#include<stdio.h>
int main (void)
{
    float salBase, grati, salLiq, salBruto, ir;

    printf("Insira o salario base: ");
    scanf ("%f", & salBase);
    printf("Insira a gratificacao: ");
    scanf ("%f", &grati);

    salBruto = salBase+ grati;

    if (salBruto>1000)
    {
        ir= salBruto* 0.25;
        salLiq= salBruto-ir;
        printf ("O salario liquido eh %f", salLiq);
    }
    else
    {
        ir=salBruto*0.10;
        salLiq = salBruto-ir;
        printf ("O salario liquido eh %f", salLiq);
    }
    return 0;
}
