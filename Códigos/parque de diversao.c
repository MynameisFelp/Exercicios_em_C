#include <stdio.h>

int main()
{
    int altura,idade,cont;
    scanf("%d",&altura);
    scanf("%d",&idade);

    if(altura>=150 && idade>=12){
       cont=cont+1;

    }
    if(altura>=140 && idade>=14){
        cont=cont+1;
    }
    if (altura>=170 || idade>=16){
        cont=cont+1;
    }
    printf("%d\n",cont);
    return 0;
}
