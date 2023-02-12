#include <stdio.h>
int main (void)
{
    int dia,mes,mesmax=12,ano,diamax,anobi;
    printf ("Digite a data (Ex: 25/12/1995 = dd/mm/aaaa): ");
    scanf("%d/%d/%d",&dia,&mes,&ano);


int proximodia(dia)
{

    if (dia<diamax)
    {

        dia=dia+1;
    }

    else if(dia=diamax)
    {

        dia=1;
        mes=proximomes(mes);
    }
    else
    {
       printf ("O numero digitado nao e um dia suportavel");
    }

    return (dia);
}
int proximomes(mes)
{
    int proximoano(ano)
    {
        ano=ano+1;
        return (ano);
    }

    mes=mes+1;
    if(mes>=mesmax)
    {

        mes=1;
        ano=proximoano(ano);
    }

    return (mes);
}
int conferirano(ano)
{

    if (ano%400==0)
    {
        anobi=1;
    }
    else
    {

        if (ano%100==0)
        {
            anobi=0;
        }
        else
        {

            if (ano%4==0)
            {
                anobi=1;
            }
            else
            {
                anobi=0;
            }
        }

    }



    return (anobi);
}
int conferirmes(mes)
{
    if (mes==1 || mes==3 || mes==5 || mes==7 || mes== 8 || mes==10 || mes==11 )
    {
        diamax=31;
        printf ("Data eh valida")
    }
    else if (mes==2)
    {

        {
            diamax=29;
        }

    }
    else
    {
        diamax=30;
    }

    return (diamax);
}

}
