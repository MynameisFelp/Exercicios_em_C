#include <stdio.h>

int main()
{
    int consumo,valor;
    scanf("%d",&consumo);
    if(consumo<=10){
        printf("7\n");
    }
    if(consumo>10 && consumo<=30){
       valor=7+consumo-10;
       printf("%d",valor);
    }
    if(consumo>=31 && consumo<=100)
    {
        valor=(7+((consumo-20)*2));
       printf("%d",valor);
    }
    if((consumo>100 && consumo==120) || consumo>120){
        valor=167+((consumo-100)*5);
       printf("%d",valor);
    }
    return 0;
}
