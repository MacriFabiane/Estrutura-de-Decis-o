//calcla a media e determina a situação do estudante Maria C Fabiane.
#include<stdio.h>

int main (void)
{
    float nota1, nota2, nota3, media, rec, mediarec;
    printf("Insira sua primaira nota: ");
    scanf("%f", &nota1);
    printf("Insira sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira sua terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1*1+nota2*3 +nota3 *4)/8;

    if (media>=6 && media<=10)
    {
        printf ("Aluno aprovado!");
    }
    else if (media<4)
    {
      printf ("Aluno reprovado antes da recuperacao!");
    }
    else if (media>=4 && media<=5.9)
     {
        printf ("Aluno em recuperacao\n");
        printf ("Insira anota da recuperacao: ");
        scanf ("%f", &rec);
        mediarec= (media + rec)/2;

        if (mediarec>=5)
        {
            printf("Aluno aprovado apos a recuperacao");
        }
        else if (mediarec<5)
        {
             printf("Aluno reprovado apos a recuperacao");
        }
      }
      else if (media<4)
      {
      printf ("Aluno reprovado antes da recuperacao!");
      }

    return 0;
}
