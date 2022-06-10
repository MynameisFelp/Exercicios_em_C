#include <stdio.h>
int main()
{
    int n,i;
    double nm[1000],pm[1000],media,totales,total,totoal1;
    scanf("%i",&n);
    for(i=0;i<n;i++){
        scanf("%lf",&nm[i]);
    }
    for(i=0;i<n;i++){
        scanf("%lf",&pm[i]);
        media+=pm[i];
    }
    for(i=0;i<n;i++){
        totales=nm[i]*pm[i];
        total+=totales;
    }
    totoal1=total/media;
    printf("%.2lf",totoal1);
    return 0;
}
