#include <stdio.h>
int main()
{
    int matricula,y=0,w;
    double cre,zeta=0,x=0,atribui=0;
    while(matricula!=999){
    cre=0;
    scanf("%d",&matricula);
      if(matricula!=999){
        scanf("%lf",&cre);
        if(y==0){
        zeta=cre;
        w=matricula;
        }
        x=cre;
        atribui+=x;
        y++;
        if(cre<=zeta){
                if(cre==zeta){
                  zeta=cre;
                }
                else{
                w=matricula;
                zeta=cre;
                }
        }
    }
  }
    atribui=atribui/y;
    printf("%d\n",w);
    printf("%.2lf\n",atribui);
    return 0;
}
