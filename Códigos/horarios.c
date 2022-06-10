#include <stdio.h>

int main()
{
    int a, b, hora;
    scanf("%d%d",&a,&b);
    if ((a == 0)||(a == 12)){
        hora= 12;
    }
    else if(a<12){
        hora= a;
    }
    else{
        hora= a - 12;
    }
    if (hora<10){
        printf("0%d\n", hora);
    }
    else{
        printf("%d\n", hora);
    }
    if (b<10){
        printf("0%d\n", b);
    }
    else{
        printf("%d\n", b);
    }
    if (a<12){
        printf("am\n");
    }
    else{
        printf("pm\n");
    }
    return 0;
}
