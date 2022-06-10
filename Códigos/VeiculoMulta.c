#include<stdio.h>

int main(){
    int carros=0,soma_carros=0,cont=0;
    double valor_apagar;

    do{
        scanf("%d",&carros);
        if(carros!=999){
            if(carros>2){
                cont++;
                soma_carros=carros+soma_carros-2;
            }
        }
    }while(carros!=999);
    valor_apagar=soma_carros*12.89;

    printf("%.2lf\n",valor_apagar);
    printf("%d\n",cont);
return 0;
}
