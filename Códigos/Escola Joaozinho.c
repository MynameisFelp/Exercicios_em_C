#include <stdio.h>

int main()
{
    int competirdores,voltas,i=0,x=0,tempo,y=0,soma_tempo=0,z=0,j=0;
    scanf("%d",&competirdores);
    scanf("%d",&voltas);
    for(i=0;i<competirdores;i++){
        soma_tempo=0;
        for(x=0;x<voltas;x++){
         scanf("%i",&tempo);
         soma_tempo+=tempo;
            }
        y++;
        if(i==0){
          z=soma_tempo;
          j=y;
        }
        if(soma_tempo<=z){
           z=soma_tempo;
           j=y;
        }
    }
        printf("%d\n",j);
    return 0;
}
