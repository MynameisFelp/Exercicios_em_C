#include <stdio.h>

int main(){
 int A[50][50],B[50][50],C[50][50],n,x,y;
    scanf("%d",&n);
    // preenche a matriz A
    for(y=0;y<n;y++){
        for(x=0;x<n;x++){
            scanf("%d",&A[y][x]);
        }
    }
    // preenche a matriz B
    for(y=0;y<n;y++){
        for(x=0;x<n;x++){
            scanf("%d",&B[y][x]);
        }
    }
//     soma matrizes A e B
    for(y=0;y<n;y++){
        for(x=0;x<n;x++){
            C[y][x]=A[y][x]+B[y][x];
        }
    }

    for(y=0;y<n;y++){
        for(x=0;x<n;x++){
            printf("%d ",&C[y][x]);
        }
        printf("\n");
    }
return 0;
}
