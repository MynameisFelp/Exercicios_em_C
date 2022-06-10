#include <stdio.h>
int main()
{
int n, vp[5], vi[5], i, contp = 0, conti= 0, x, y, j, t;
    for(i = 0; i < 15; i++)
    {
    scanf("%d", &n);
    if(n % 2 == 0)
    {
        vp[contp++] = n;
        if(contp == 5)
        {
            for(y = 0; y < contp; y++)
            {
                printf("par[%d] = %d\n",y, vp[y]);
            }
            contp = 0;
        }
    }
    else
    {
        vi[conti++] = n;
        if(conti == 5)
        {
            for(x = 0; x < conti; x++)
            {
            printf("impar[%d] = %d\n",x, vi[x]);
            }
            conti = 0;
        }
    }
}
    for( j =0; j < conti; j++)
    {
        printf("impar[%d] = %d\n", j, vi[j]);
    }
    for(t = 0; t < contp; t++){
        printf("par[%d] = %d\n",t, vp[t]);
    }
return 0;
}
