#include <stdio.h>
#include <math.h>
int main()
{
	int x=0,i,cont=0;
	double n,v[10000],soma,media,s,s1,s2;
	while(n!=-1)
	{
	    scanf("%lf", &n);
	    v[x]=n;
	    soma+=v[x];
	    x++;
	}
	i=x-1;
	soma+=1;
	media=soma/i;
	for(x=0;x<i;x++)
	{
	    s+=((v[x]-media)*(v[x]-media));
	}
	s1=s/(i-1);
	s2=sqrt(s1);
	for(x=0;x<i;x++)
	{
	    if(v[x]>media)
	    {
	        cont++;
	    }
	}
	printf("%.2lf\n",media);
	printf("%.2lf\n",s2);
	printf("%d\n",cont);
	return 0;
}
