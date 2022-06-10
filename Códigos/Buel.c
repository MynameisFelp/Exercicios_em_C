#include <stdio.h>
int main()
{
	int x,i,n,s=0,v[1000],f[1000],menor,aux,j,y,cont,med,a,conttt=1;
	double media=0, soma=0,medpar;
	scanf("%d", &n);

	for(a=0;a<n;a++)
	{
		soma=0;
		scanf("%d",&i);
		for(x=0;x<i;x++)
		{
			scanf("%d", &s);
			v[x]=s;
			soma+=v[x];
		}
	media=soma/i;
	for(x=0;x<i-1;x++){
        menor=x;
        for(j=x+1;j<i;j++){
            if(v[j]<v[menor]){
                menor=j;
            }
        }
        if(menor!=x){
            aux=v[x];
            v[x]=v[menor];
            v[menor]=aux;
    }
    }

     for(x=0;x<i;x++){
        if(f[x]!=-1){
            cont=1;
            for(j=x+1;j<i;j++){
                if(v[j]==v[x]){
                    cont++;
                    f[j]=-1;
                }
            }
            f[x]=cont;
        }
    }
    printf("sequencia %i:\n",conttt);
    conttt++;
    	for(x=0;x<i;x++)
    	{
    		printf("%d ", v[x]);

		}
		printf("\n");

		printf("%d %d\n",v[0],v[i-1]);

		printf("%g",media);


		int moda[i], atual, freq=1;

for(x=0;x<i;x++)
{
     atual = v[x];

    for(y=x+1;y<i;y++)
    {
        if(v[y]==atual)
        {
            freq++;
        }
    }
    moda[x] = freq;
    freq = 1;


}

int maiorNum = moda[0];
for(x=0;x<i;x++)
{
    if(moda[x]>1 && moda[x]>maiorNum)
    {
        maiorNum = moda[x];

    }

}
printf("\n");

for(x=0;x<i;x++)
{
    if(moda[x]==maiorNum && maiorNum>1)
    {
        printf("%d ",v[x]);

    }
}
if(maiorNum==1)
{
    printf(" ");
}



        if(i%2!=1)
        {
        	med=(i/2)-1;
            medpar = ((double)(v[med])+(double)(v[med+1]))/2;
        	printf("\n%g",medpar);
		}
		else
		{
			med=i/2;
			printf("\n%d", v[med]);
		}
		printf("\n");
	}


	return 0;
}
