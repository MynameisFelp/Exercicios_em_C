#include <stdio.h>

int main(){
 int m[50][50],n,x,y,cont=0;
    scanf("%d",&n);
    for(y=1;y<=n;y++){
            for(x=1;x<=n;x++){
                scanf("%d",&m[y][x]);
            }
        }
// definindo qual será o valor que irá no nxn
        for(y=1;y<=n;y++){
            for(x=1;x<=n;x++){
                if(m[y][x-1]==9 && m[y-1][x-1]==9 && m[y-1][x]==9){
                    cont++;
                }
            }
        }
        for(y=1;y<=n;y++){
            for(x=1;x<=n;x++){
                if(m[4][1]==1){
                    cont--;
                }
            }
        }
    if(cont>0){
        printf("1\n");
    }

    else{
        printf("0\n");
    }

return 0;
}
