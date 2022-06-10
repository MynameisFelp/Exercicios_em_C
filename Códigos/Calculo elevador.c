#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

    int numero_leituras,capacidade_maxima,numero_saidas=0,numero_entradas=0,cont,i,x=0,y=0;
    scanf("%d%d",&numero_leituras,&capacidade_maxima);
    for(i=0;i<numero_leituras;i++)
    {
         scanf("%d%d",&numero_saidas,&numero_entradas);
         y=numero_entradas-numero_saidas;
         x=x+y;
         if(x>capacidade_maxima){
            cont++;
         }
    }
    if(cont>=1){
        printf("S");
    }
    else{
        printf("N");
    }
return 0;
}
