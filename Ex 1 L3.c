// Classifica triangulos
#include <stdio.h>
#include<math.h>
int main (void)
{
     int lado1, lado2, lado3, A, B, C;

     printf("Vamos ver se ah possivel formar um triangulo com os lados fornecidos por voce:\nValor lado1: ");
     scanf("%d", &lado1);
     printf("Valor lado 2: ");
     scanf("%d", &lado2);
     printf("Valor lado 3: ");
     scanf("%d", &lado3);

     if (lado1>=lado2 && lado2>=lado3)
     {
         printf ("Ordem crescente: %d %d %d\n", lado1, lado2, lado3);

            if (lado1>=lado2+lado3)
            {
               printf("Nao eh possivel formar um triangulo");
            }
            else if(lado1*lado1==lado2*lado2+lado3*lado3)
            {
                printf("Triangulo retangulo.");
            }
             else if(lado1*lado1>lado2*lado2+lado3*lado3)
            {
                printf("Triangulo obtusangulo");
            }
             else if(lado1*lado1<lado2*lado2+lado3*lado3)
            {
                printf("Triangulo acutangulo");
            }
            else if (lado1==lado2 && lado2==lado3 )
            {
                printf ("Triangulo equilatero");
            }
            else if ((lado1==lado2 && lado1!=lado3)||(lado1==lado3 && lado1!=lado2)||(lado2==lado3 && lado2!=lado1)||(lado2==lado1 && lado2!=lado3))
             {
                printf("eh um triangulo isoceles");
             }
            else if ((lado3==lado2 && lado1!=lado3)||(lado1==lado3 && lado3!=lado2))
             {
               printf("eh um triangulo isoceles");
             }
     }
     else if (lado1>=lado3 && lado3>=lado2)
     {

         printf ("Ordem crescente: %d %d %d\n", lado1, lado3, lado2);

         if (lado1>=lado3+lado2)
        {
           printf("Nao eh possivel formar um triangulo");
        }
        else if(lado1*lado1==lado2*lado2+lado3*lado3)
            {
                printf("Triangulo retangulo.");
            }
        else if(lado1*lado1>lado2*lado2+lado3*lado3)
            {
                printf("Triangulo obtusangulo");
            }
         else if(lado1*lado1<lado2*lado2+lado3*lado3)
            {
                printf("Triangulo acutangulo");
            }
        else if (lado1==lado2 && lado2==lado3 )
            {
                printf ("Triangulo equilatero");
            }
        else if ((lado1==lado2 && lado1!=lado3)||(lado1==lado3 && lado1!=lado2)||(lado2==lado3 && lado2!=lado1)||(lado2==lado1 && lado2!=lado3))
         {
            printf("eh um triangulo isoceles");
         }
        else if ((lado3==lado2 && lado1!=lado3)||(lado1==lado3 && lado3!=lado2))
         {
           printf("eh um triangulo isoceles");
         }
     }
     else if (lado2>=lado1 && lado1>=lado3)
     {
         printf ("Ordem crescente: %d %d %d\n", lado2, lado1, lado3);

        if (lado2>=lado1+lado3)
        {
           printf("Nao eh possivel formar um triangulo");
        }
        else if(lado2*lado2==lado1*lado1+lado3*lado3)
            {
                printf("Triangulo retangulo.");
            }
        else if(lado2*lado2>lado1*lado1+lado3*lado3)
            {
                printf("Triangulo obtusangulo");
            }
         else if(lado2*lado2<lado1*lado1+lado3*lado3)
            {
                printf("Triangulo acutangulo");
            }
        else if (lado1==lado2 && lado2==lado3 )
            {
                printf ("Triangulo equilatero");
            }
        else if ((lado1==lado2 && lado1!=lado3)||(lado1==lado3 && lado1!=lado2)||(lado2==lado3 && lado2!=lado1)||(lado2==lado1 && lado2!=lado3))
         {
            printf("eh um triangulo isoceles");
         }
        else if ((lado3==lado2 && lado1!=lado3)||(lado1==lado3 && lado3!=lado2))
         {
           printf("eh um triangulo isoceles");
         }
     }
    else if (lado2>=lado3 && lado3>=lado1)
     {
         printf ("Ordem crescente: %d %d %d\n", lado2, lado3, lado1);

        if (lado2>=lado3+lado1)
        {
           printf("Nao eh possivel formar um triangulo");
        }
        else if(lado2*lado2==lado1*lado1+lado3*lado3)
            {
                printf("Triangulo retangulo.");
            }
        else if(lado2*lado2>lado1*lado1+lado3*lado3)
            {
                printf("Triangulo obtusangulo");
            }
        else if(lado2*lado2<lado1*lado1+lado3*lado3)
            {
                printf("Triangulo acutangulo");
            }
        else if (lado1==lado2 && lado2==lado3 )
            {
                printf ("Triangulo equilatero");
            }
        else if ((lado1==lado2 && lado1!=lado3)||(lado1==lado3 && lado1!=lado2)||(lado2==lado3 && lado2!=lado1)||(lado2==lado1 && lado2!=lado3))
         {
            printf("eh um triangulo isoceles");
         }
        else if ((lado3==lado2 && lado1!=lado3)||(lado1==lado3 && lado3!=lado2))
         {
           printf("eh um triangulo isoceles");
         }
     }
     else if (lado3>=lado2 && lado2>=lado1)
     {
         printf ("Ordem crescente: %d %d %d\n", lado3, lado2, lado1);
         if (lado3>=lado2+lado1)
        {
           printf("Nao eh possivel formar um triangulo");
        }
        else if(lado3*lado3==lado1*lado1+lado2*lado2)
            {
                printf("Triangulo retangulo.");
            }
        else if(lado3*lado3>lado1*lado1+lado2*lado2)
            {
                printf("Triangulo obtusangulo");
            }
        else if(lado3*lado3<lado1*lado1+lado2*lado2)
            {
                printf("Triangulo acutangulo");
            }
        else if (lado1==lado2 && lado2==lado3 )
            {
                printf ("Triangulo equilatero");
            }
        else if ((lado1==lado2 && lado1!=lado3)||(lado1==lado3 && lado1!=lado2)||(lado2==lado3 && lado2!=lado1)||(lado2==lado1 && lado2!=lado3))
         {
            printf("eh um triangulo isoceles");
         }
        else if ((lado3==lado2 && lado1!=lado3)||(lado1==lado3 && lado3!=lado2))
         {
           printf("eh um triangulo isoceles");
         }
     }
     else if (lado3>=lado1 && lado1>=lado2)
     {
         printf ("Ordem crescente: %d %d %d\n", lado3, lado1, lado2);
         if (lado3>=lado1+lado2)
        {
           printf("Nao eh possivel formar um triangulo");
        }
         else if(lado3*lado3==lado1*lado1+lado2*lado2)
            {
                printf("Triangulo retangulo.");
            }
         else if(lado3*lado3>lado1*lado1+lado2*lado2)
            {
                printf("Triangulo obtusangulo");
            }
         else if(lado3*lado3<lado1*lado1+lado2*lado2)
            {
                printf("Triangulo acutangulo");
            }
        else if (lado1==lado2 && lado2==lado3 )
            {
                printf ("Triangulo equilatero");
            }
        else if ((lado1==lado2 && lado1!=lado3)||(lado1==lado3 && lado1!=lado2)||(lado2==lado3 && lado2!=lado1)||(lado2==lado1 && lado2!=lado3))
         {
            printf("eh um triangulo isoceles");
         }
        else if ((lado3==lado2 && lado1!=lado3)||(lado1==lado3 && lado3!=lado2))
         {
           printf("eh um triangulo isoceles");
         }
     }
     return 0;}
