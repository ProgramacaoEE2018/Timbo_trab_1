#include<stdio.h>

int main(){
    float vc, vf, vem=0;
    float ve[10];
    int n, i=0, j;
    printf("quantas ves foram realizadas?\n");
    scanf("%d",&n);
    while(i<n){
        printf("digite a nota da ve%d\n", i+1);
        scanf("%f",&ve[i]);
        i=i+1;
        }
    printf("digite a nota da vc\n");
    scanf("%f", &vc);
    for(j=0; j<i; j++){
        vem=vem+ve[j];
    }
    vem=vem/i;
    vf=(20-vem-vc)/2;
    if(vf<4){
        vf=4;
    }
    printf("voce precisa tirar %.2f na vf :)", vf);
    return 0;
}
