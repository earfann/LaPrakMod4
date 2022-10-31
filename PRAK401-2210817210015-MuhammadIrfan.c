#include <stdio.h>
int main(){
    int i, bil;
    char sim;
    printf("INPUT  : ");
    scanf("%d %c", &bil, &sim);
    printf("OUTPUT : ");
    for(i=1; i<=50; i++){
        if(i%bil==0){
            printf("%c ", sim);}
        else{
            printf("%d ", i);}    
    }
}