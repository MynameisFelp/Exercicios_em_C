#include <stdio.h>
#define TAM 1000

int main(){
 int m[TAM][TAM],n;
    scanf("%d",&n);
    for(int y=0;y<n;y++){
        for(int x=0;x<n;x++){
            scanf("%d",&m[y][x]);
        }
    }
return 0;
}
