#include <stdio.h>

int main()
{
    int velomax,velovei;
    scanf("%f",&velomax);
    scanf("%f",&velovei);
    if(velovei>velomax){
       if(velovei<=velomax*1.2){
            printf("85.13\n");
            printf("4\n");
        }
        else{
                if(velovei>velomax*1.2 && velovei<=velomax*1.5)
                {
                    printf("127.69\n");
                    printf("5\n");
                }
                else{
                    printf("574.62\n");
                    printf("7\n");
                }
        }
    }
    else{
        printf("0.00\n");
        printf("0\n");
    }
    return 0;
}
