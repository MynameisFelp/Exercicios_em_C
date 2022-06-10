#include <stdio.h>
int main ()
{
    int n,v[1000],i,j,aux,m,menor;
    scanf("%i",&n);
    for(i=0;i<n;i++){
        scanf("%i",&v[i]);
    }
    for(i=0;i<n-1;i++){
        menor=i;
        for(j=i+1;j<n;j++){
            if(v[j]<v[menor]){
                menor=j;
            }
        }
        if(menor!=i){
            aux=v[i];
            v[i]=v[menor];
            v[menor]=aux;
        }
    }
        m=n/2;
    printf("%i ",v[0]);
    printf("%i ",v[m]);
    printf("%i ",v[n-1]);
  return 0;
}
