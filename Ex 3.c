//Veifica se o paciente esta doente com algumas perguntas. MAria C. Fabiane 07/04/2022
#include<stdio.h>

int main (void)
{
    char situacao, situacao2;
    printf ("O paciente esta bem?(responda com S ou N)  ");
    scanf ("%c", &situacao);

    if (situacao== 'N')
    {
        printf ("Ele sente dor? ");
        setbuf(stdin, NULL);
        scanf ("%c", &situacao2);
         if (situacao2 == 'N')
          {
              printf ("Temperatura paciente maior que 37?");
              setbuf(stdin, NULL);
              scanf ("%c", &situacao2);
              if (situacao2=='N')
              {
                  printf ("Saudavel");
              }
              else if (situacao2 =='S')
              {
                  printf ("Doente");
              }
          }
          else if (situacao2=='S')
          {
               printf ("Doente");
          }
    }
    else if (situacao=='S')
    {
        printf ("Saudavel");
    }
    return 0;
}
