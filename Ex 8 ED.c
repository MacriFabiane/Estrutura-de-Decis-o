
#include<stdio.h>
int main(void)
{
    int lado1, lado2, lado3;

     printf("Vamos ver se ah possivel formar um triangulo com os lados fornecidos por voce:\nValor lado1: ");
     scanf("%d", &lado1);
     printf("Valor lado 2: ");
     scanf("%d", &lado2);
     printf("Valor lado 3: ");
     scanf("%d", &lado3);

     if (lado1>=lado2+lado3 || lado2>=lado1+lado3 || lado3>=lado1+lado2)
     {
         printf("Nao eh possivel formar um triangulo");
     }
     else if (lado1<lado2+lado3 && lado2<lado1+lado3 && lado3<lado1+lado2)
     {
        printf("Eh possivel formar um triangulo!\n");

        if (lado1==lado2 && lado2==lado3)
         {
          printf("Eh um triangulo eguilatero");
         }
        else if ((lado1==lado2 && lado1!=lado3)||(lado1==lado3 && lado1!=lado2)||(lado2==lado3 && lado2!=lado1)||(lado2==lado1 && lado2!=lado3))
         {
            printf("eh um triangulo isoceles");
         }
        else if ((lado3==lado2 && lado1!=lado3)||(lado1==lado3 && lado3!=lado2))
         {
           printf("eh um triangulo isoceles");
         }
        else if (lado1!=lado2 && lado2!=lado3)
         {
            printf("Eh um triangulo escaleno");
         }

     }

    return 0;

}
