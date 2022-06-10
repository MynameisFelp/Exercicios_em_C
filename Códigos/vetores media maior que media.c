#include<stdio.h>

int main(){
    int v[20];
    int x;
    double media ,maior,menor;
        for(x=0;x<20;x++){
            scanf("%d",&v[x]);

            if(x==0){
                maior=v[x];
                menor=v[x];
            }
            if(v[x]>=maior){
                maior=v[x];
            }
            if(v[x]<=menor){
                menor=v[x];
            }
        }
        media=(menor+maior)/2;
        printf("media: %.2lf\n",media);
        for(x=0;x<20;x++){
            if(v[x]>media){
            printf("%d\n",v[x]);
            }
        }
    return 0;
}
