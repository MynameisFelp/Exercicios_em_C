#include <stdio.h>

int main(){
 int m[50][50],n,define,x,y,somadiagonaisP,mt[50][50],somaCima,somaBaixo;
 char guardaCB;
    guardaCB=getchar();
    scanf("%d",&n);

    // define a matriz quadrada
    for(y=0;y<n;y++){
        for(x=0;x<n;x++){
            scanf("%d",&m[y][x]);
        }
    }
    scanf("%d",&define);

    // inverte matriz quadrada
    for(y=0;y<n;y++){
        for(x=0;x<n;x++){
            mt[x][y]=m[y][x];
        }
    }
    // printa a transposta
    for(y=0;y<n;y++){
        for(x=0;x<n;x++){
            printf("%d ",mt[y][x]);
        }
        printf("\n");
    }
    // soma diagonal principal da transposta
     for(y=0;y<n;y++){
        for(x=0;x<n;x++){
            if(x==y){
                somadiagonaisP+=m[y][x];
            }
        }
    }


    // usando a variavel para somar e saber se os valores correspondem
    for(y=0;y<n;y++){
        for(x=0;x<n;x++){
            if(x > y){
                somaCima+= mt[y][x];
            }
            if(y>x){
                somaBaixo+= mt[y][x];
            }

        }
    }

   if(guardaCB=='B' && define==somaBaixo){
    printf("S\n");
   }
  if(guardaCB=='B' && define!=somaBaixo){
    printf("N\n");
   }
   if(guardaCB=='C' && define==somaCima){
    printf("S\n");
   }
  if(guardaCB=='C' && define!=somaCima){
    printf("N\n");
   }
return 0;
}
