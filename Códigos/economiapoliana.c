#include <stdio.h>
int main(){
    int cont=0;
    double seg,ter,qua,qui,sex,sab,dom,soma;
    scanf("%lf",&seg);
    scanf("%lf",&ter);
    scanf("%lf",&qua);
    scanf("%lf",&qui);
    scanf("%lf",&sex);
    scanf("%lf",&sab);
    scanf("%lf",&dom);
    soma=seg+ter+qua+qui+sex+sab+dom;

    if(seg+0.5<=ter){
        cont++;
    }
    if(ter+0.5<=qua){
        cont++;
    }
    if(qua+0.5<=qui){
        cont++;
    }
    if(qui+0.5<=sex){
        cont++;
    }
    if(sex+0.5<=sab){
        cont++;
    }
    if(sab+0.5<=dom){
        cont++;
    }
    printf("R$ %.2lf\n",soma);
    printf("%d\n",cont);

return 0;
}
