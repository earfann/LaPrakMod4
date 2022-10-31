#include <stdio.h>
int main(){
    int x, y, a, b;
    printf("INPUT  : ");
    scanf("%d %d", &x, &y);
    printf("OUTPUT : ");
    if(x>y){
        for(a=x, b=y; a>=y, b<=x; a--, b++){
            printf("%d %d - ", a, b);}
    }
    else{
        for(a=x, b=y; a<=y, b>=x; a++, b--){
            printf("%d %d - ", a, b);}
    }
}