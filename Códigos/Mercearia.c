#include <stdio.h>

int main(){
 int A[50][50],x,y;
 double n,soma, B[50][50],valorpastel,valorempada,valorkibe;
    scanf("%d",&n);

    for(y=0;y<2;y++){
        for(x=0;x<4;x++){
            scanf("%d",&A[y][x]);
        }
    }
    // preços
    for(y=0;y<1;y++){
        for(x=0;x<4;x++){
            scanf("%lf",&B[y][x]);
        }
    }
    // preço pastel
    for(y=0;y<1;y++){
        for(x=0;x<4
        ];x++){
            valorpastel+=A[y][x];
        }
    }



    printf("%.2lf\n",valorpastel);
     printf("%.2lf\n",valorempada);
     printf("%.2lf\n",valorkibe);

return 0;
}
