#include <stdio.h>

int main()
{
    double ph;
    scanf("%lf",&ph);
    if(ph==7){
        printf("Neutra");
    }
    if(ph<7){
        printf("Acida");
    }
    if(ph>7){
        printf("Basica");
    }
    return 0;
}
