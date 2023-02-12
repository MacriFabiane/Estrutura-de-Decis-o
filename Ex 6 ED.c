//Com base no sexo e na altura da pessoa descobre o peso ideal para ela. Maria C. Fabiane.01/04/2022
#include<stdio.h>
int main (void)
{
    float alt, ideal;
    char sexo;

    printf (" Informe se voce eh homem ou mulher com F/f de feminino, ou M/m de masculino: ");
    scanf ("%c", &sexo);

    if (sexo== 'f' || sexo== 'F')
    {
        printf ("Digite sua altura par que possa ser calculado o seu peso ideal: ");
        scanf ("%f", &alt);
        ideal = 62.1*alt -44.7;
        printf("Seu peso ideal eh: %f", ideal);
    }
    else if (sexo == 'm' || sexo== 'M')
    {
        printf ("Digite sua altura par que possa ser calculado o seu peso ideal: ");
        scanf ("%f", &alt);
        ideal= 72.7*alt - 58;
        printf("Seu peso ideal eh: %f", ideal);
    }
    else
    {
        printf("Caractere invalido!");
    }
}
