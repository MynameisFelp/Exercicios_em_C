#include <stdio.h>

int main ()
{
    double investI,montante,Juros,aux,trimestre,x,y;
    int tempo,cont;
    scanf("%lf%lf%d",&investI,&Juros,&tempo);
    aux=investI*Juros;
    montante=investI+aux;
    printf("Rendimento: %.2lf Montante: %.2lf\n",aux,montante);
    cont=1;
    trimestre=(tempo*12/3);

    while(cont<trimestre){
        y=montante;
        aux=y*Juros;
        montante=aux+y;
        printf("Rendimento: %.2lf Montante: %.2lf\n",aux,montante);
        cont++;
    }
return 0;
}
