#include <stdio.h>

int main()
{
    int n,v[1000],V[1000],i;
    scanf("%i",&n);
    for(i=0;i<n;i++){
        scanf("%i",&v[i]);
    }
    for(i=0;i<n;i++){
        scanf("%i",&V[i]);
    }
    for(i=0;i<n;i++){
        printf("%i\n",v[i]);
        printf("%i\n",V[i]);
    }
    return 0;
}
