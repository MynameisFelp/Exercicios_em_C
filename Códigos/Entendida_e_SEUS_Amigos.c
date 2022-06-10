#include <stdio.h>
#define TAM 1000
int main(){
    int ideias,extravagancias, V[TAM],OS,cont=0,i,j;
    scanf("%d %d",&ideias,&extravagancias);
    for(i=0;i<ideias;i++){
        scanf("%d",&V[i]);
    }
    for(i=0;i<ideias;i++){
            for(j=0;j<ideias;j++){
                if(i==j){

                }
                else
                    OS=V[i]+V[j];
                    if(OS==extravagancias){
                        cont++;
                    }
            }
    }
    if(cont>0)
        printf("SIM\n");

    else
        printf("NAO\n");


return 0;
}
