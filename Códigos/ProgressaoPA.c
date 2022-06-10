#include <stdio.h>
int main()
{
    int razao,ultimo_numero,u,cont=0,x=0,soma;
    scanf("%d",&razao);
    scanf("%d",&ultimo_numero);
    u=ultimo_numero;
    while(x>=0){
        x=ultimo_numero-razao;
        ultimo_numero=x;
        cont++;
    }
    if(x<0){
        x+=razao;
    }
    soma=((x+u)*cont)/2;
    printf("A somatoria da PA eh: %i",soma);
    return 0;
}
