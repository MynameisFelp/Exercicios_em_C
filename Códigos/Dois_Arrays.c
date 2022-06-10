#include <stdio.h>
#define MAX 5000
int main()
{
    int n,v1[10000],v2[10000],v3[MAX]={0},f[MAX]={0},menor,aux,i,j,cont;
    scanf("%i",&n);
    for(i=0;i<n;i++){
        scanf("%i",&v1[i]);
    }
    for(i=0;i<n;i++){
        scanf("%i",&v2[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        if(v1[i]==v2[j]){
            v3[i]=v1[i];
        }

        }
    }
    //ordem
    for(i=0;i<n-1;i++){
        menor=i;
        for(j=i+1;j<n;j++){
            if(v3[j]<v3[menor]){
                menor=j;
            }
        }
        if(menor!=i){
            aux=v3[i];
            v3[i]=v3[menor];
            v3[menor]=aux;
        }


    }
    //frequencia
    for(i=0;i<n;i++){
        if(f[i]!=-1){
            cont=1;
            for(j=i+1;j<n;j++){
                if(v3[j]==v3[i]){
                    cont++;
                    f[j]=-1;
                }
            }
            f[i]=cont;
        }
    }
    for(i=0;i<n;i++){
        if(v3[i]!=0){
            if(f[i]!=-1){
            printf("%i\n",v3[i]);
            }
        }
    }
    return 0;
}
