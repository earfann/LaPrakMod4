#include <stdio.h>
int main(){
    int n, k, hasil, plus;
    printf("INPUT  : ");
    scanf("%d %d", &n, &k);
    printf("OUTPUT :\n");
    for(int i=0; i<n; i++){
        for(int j=i; j>=0; j--){
            printf("(%d * %d)", j+1, k);
            if(j>0){
                printf(" + ");}
        }
        hasil += (i+1) * k;
        printf(" = %d\n", hasil);
        plus += hasil;
    }
    printf("%d", plus);
}