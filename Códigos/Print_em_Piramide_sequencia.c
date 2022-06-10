#include <stdio.h>
int main()
{
	int x,i,V[1000],n[10000],menor,aux,j,cont=0;
	scanf("%d", &i);
	for(x=0;x<i;x++){
		scanf("%d",&V[x]);
		n[x]=V[x];
	}
	for(x=0;x<i-1;x++){
        menor=x;
        for(j=x+1;j<i;j++){
            if(n[j]<n[menor]){
                menor=j;
            }
        }
        if(menor!=x){
            aux=n[x];
            n[x]=n[menor];
            n[menor]=aux;
        }
    }
    for(x=0;x<i;x++){
    	if(V[x]==n[x]){
    		cont++;
		}
    }
    printf("%d\n",cont);
    for(x=0;x<i;x++){
    	if(V[x]==n[x]){
    		printf("%d %d\n", V[x], x+1);
		}
    }
    return 0;
}
