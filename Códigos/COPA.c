#include <stdio.h>
int main()
{
    char times_oitavas[16] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'},times_quartas[8],times_semi[4],times_final[2],campeao;
	int todosResultados[30], resultados_oitavas[16],i,j,aux,resultados_quartas[8],resultados_semi[4],resultado_final[2];

    for(i=0;i<30;i++)
    {
        scanf("%d",&todosResultados[i]);

    }
    for(j=0;j<16;j++)
    {
        resultados_oitavas[j] = todosResultados[j];

    }

    for(j=16;j<24;j++)
    {
        resultados_quartas[j-16] = todosResultados[j];
    }
    for(j=24;j<28;j++)
    {
        resultados_semi[j-24] = todosResultados[j];
    }
    for(j=28;j<30;j++)
    {
        resultado_final[j-28] = todosResultados[j];
    }


    aux=0;
    for(j=0;j<16;j=j+2)
    {
        if(resultados_oitavas[j]>resultados_oitavas[j+1])
    {
        times_quartas[aux] = times_oitavas[j];
        aux++;
    }
    if(resultados_oitavas[j]<resultados_oitavas[j+1])
    {
        times_quartas[aux] = times_oitavas[j+1];
        aux++;
    }
}

    aux = 0;
    for(j=0;j<8;j=j+2){
        if(resultados_quartas[j]>resultados_quartas[j+1]){
        times_semi[aux] = times_quartas[j];
        aux++;

        }
        if(resultados_quartas[j]<resultados_quartas[j+1]){
        times_semi[aux] = times_quartas[j+1];
        aux++;
        }
}
        aux = 0;
        for(j=0;j<4;j=j+2){
            if(resultados_semi[j]>resultados_semi[j+1]){
                times_final[aux] = times_semi[j];
                aux++;
            }

            if(resultados_semi[j]<resultados_semi[j+1]){
                times_final[aux] = times_semi[j+1];
                aux++;
            }
        }

        if(resultado_final[0]>resultado_final[1]){
            campeao = times_final[0];
        }
        if(resultado_final[0]<resultado_final[1]){
            campeao = times_final[1];
        }
        printf("%c",campeao);
}
