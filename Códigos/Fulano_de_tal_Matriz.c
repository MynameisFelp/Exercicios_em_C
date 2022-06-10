#include <stdio.h>
#define TAM 1000
int main(){
    int x,y,linha,coluna,qtd;
    int m[TAM][TAM],soma,soma1;
    scanf("%d",&linha);
    scanf("%d",&coluna);
    qtd=linha*coluna;
    for(y=0;y<linha;y++){
        for(x=0;x<coluna;x++)
            scanf("%d",&m[y][x]);
    }

    //Matriz nao possui traço
    if(linha!=coluna){
        printf("A matriz nao possui traco \n");
        for(y=0;y<linha;y++){
            for(x=0;x<coluna;x++){
                printf("%d ",m[y][x]);
            }
        printf("\n");
        }
    }

    //calculo da soma dos elementos da matriz quadrada
    if(linha=coluna){
        for(x=0;x<qtd;x++){
            soma+=m[x][x];
        }
        // soma da segundaria da matriz
        for(y=0;y<linha;y++){
            for(x=0;x<coluna;x++){
                if ( y == coluna - 1 - x){
                    soma1+=m[y][x];
                }
            }
        }
            printf("%d \n",soma);
            printf("%d \n",soma1);
            for(y=0;y<linha;y++){
                for(x=0;x<coluna;x++){
                    printf("%d",m[y][x]);
                }
                printf("\n");
            }
        }
return 0;
}
