#include <stdio.h>
int main ()
{
    int m,n,v[1000],i,j,menor,aux,soma,tsoma=0;
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
    if(n%2==1){
    m=(n/2);
    }
    else{
        m=(n/2)-1;
    }
        for(i=0;i<n;i++){
            soma=v[i]-v[m];
            if(soma<0){
                soma=soma*-1;
            }
            tsoma+=soma;
        }

        printf("%i %i",tsoma,v[m]);
  return 0;
}
