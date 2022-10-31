#include <stdio.h>
int main(){
    int bil, a;
    printf("INPUT  : ");
    scanf("%d", &bil);
    printf("OUTPUT : \n");
    for(a=1; a<=bil; a++){
        if(a%2==1){
            printf("%d ", a);}
        else{}
    }
    printf("\n");
    for(a=bil; a>=1; a--){
        if(a%2==0){
            printf("%d ", a);}
        else{}
    }
}