#include <stdio.h>

int main(){
     int m[50][50],n,x,y;
        scanf("%d",&n);
        for(y=1;y<=n;y++){
            for(x=1;x<=n;x++){
                m[y][x]=x;
            }
        }
        for(y=1;y<=n;y++){
            for(x=1;x<=n;x++){
                if(x==y || x>y){
                    printf("%d",m[y][x]);
                }
                else
                    printf(" ");

            }
            printf("\n");
        }
return 0;
}
