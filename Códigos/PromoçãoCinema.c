#include <stdio.h>

int main (){
    int Dia_mes,Alunos, V[40],i, cont=0, cont1=0,cont2=0,cont3=0,idade;
    double Metade=0;

        scanf("%d",&Alunos);
        scanf("%d",&Dia_mes);

        for(i=0;i<Alunos;i++){
            scanf("%d",&V[i]);
        }

        // Não existe promoção para estes alunos
        if(Alunos<5 || Alunos>40 || Dia_mes<1 || Dia_mes>31){
            printf("ENTRADA INVALIDA\n");
        }

        else{

        //PROMOCAO 1
            for(i=0;i<Alunos;i++)
                V[i]=idade;
                for(i=0;i<Alunos;i++)
                    if(idade+V[i]==Dia_mes){
                         printf("Promocao 1: SIM\n");
                         cont1++;
                    }

                    if(idade+V[i]!=Dia_mes){
                         printf("Promocao 1: NAO\n");
                    }


            // PROMOCAO 2

            for(i=0;i<Alunos;i++){
                    if(V[i]%2==0){
                        cont++;
                        cont2++;
                    }
                }
            Metade=(double)Alunos/2;
                if(cont>Metade){
                    printf("Promocao 2: SIM\n");
                    cont3++;
                }

                else{
                    printf("Promocao 2: NAO\n");
                }

            // PROMOCAO 3
            for(i=0;i<Alunos;i++){
                if(V[i]%1==0 && V[i]%V[i]==0){
                    printf("Promocao 3: SIM\n");

                    break;
                }
                if(V[i]%V[i]!=0){
                    printf("Promocao 3: NAO\n");
                }
            }


            // promocao 4
                if(cont1>0 && cont2>0 && cont3>0){
                     printf("Promocao 4: SIM\n");
                }
                else
                    printf("Promocao 4: NAO\n");
        }
return 0;
}
