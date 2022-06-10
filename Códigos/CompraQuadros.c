#include<stdio.h>

int main(){
    int pregos,soma_pregos,sobras,x;
    double valor_apagar,total_caixas;

    do{
        scanf("%d",&pregos);
        if(pregos%2==0){
            soma_pregos=soma_pregos+pregos;
        }
    }while(pregos%2==0);

    total_caixas=soma_pregos/12+1;
    x=total_caixas*12;
    valor_apagar=total_caixas*7.89;
    sobras=x-soma_pregos;

    printf("%.2lf\n",valor_apagar);
    printf("%d\n",sobras);
return 0;
}
