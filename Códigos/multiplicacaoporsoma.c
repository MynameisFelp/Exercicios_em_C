#include<stdio.h>
int main(){
    int numero1=0,numero2=0,i,soma=0;

     scanf("%d",&numero1);
     scanf("%d",&numero2);
     if(numero2>=0){
        for(i=0;i<numero2;i++){
            soma=numero1+soma;
        }
     printf("%d\n",soma);
     }
     else{
        for(i=0;i>numero2;i--){
            soma=numero1+soma;
        }
     printf("-%d\n",soma);
     }
return 0;
}
