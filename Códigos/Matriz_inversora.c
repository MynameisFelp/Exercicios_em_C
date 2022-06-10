#include <stdio.h>

int main(){
 int A[50][50],B[50][50],C[50][50],n,x,y;
    scanf("%d",&n);

    for(y=0;y<n;y++){
        for(x=0;x<n;x++){
            scanf("%d",&A[y][x]);
        }
    }
    // multiplica os valores negativos da matriz por 2
    for(y=0;y<n;y++){
        for(x=0;x<n;x++){
            if(A[y][x]<0){
                A[y][x]=A[y][x]*2;
            }
        }
    }

    for(y=0;y<n;y++){
        for(x=0;x<n;x++){
            printf("%d ",A[x][y]);
        }
        printf("\n");
    }

return 0;
}
