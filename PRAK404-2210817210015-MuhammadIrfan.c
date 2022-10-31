#include <stdio.h>
int main(){
    float a, b, hasil, pilihan;
    while(1){
    printf("INPUT  :\n");
    printf("Pilih program :\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");
    printf("Masukkan Pilihan :\n");
    scanf("%f", &pilihan);
    if(pilihan==5){
        printf("OUTPUT :\nTerimakasih, telah menggunakan kalkulator Muhammad Irfan"); break;}
    else if(pilihan>5){
        printf("OUTPUT :\nInput anda salah, silahkan coba lagi\n"); continue;}
    printf("Masukkan nilai pertama : \n");
    scanf("%f", &a);
    printf("Masukkan nilai kedua   : \n");
    scanf("%f", &b);
    if(pilihan==1){
        printf("OUTPUT :\nHasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", a, b, a+b);}
    else if(pilihan==2){
        printf("OUTPUT :\nHasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", a, b, a-b);}
    else if(pilihan==3){
        printf("OUTPUT :\nHasil perkalian antara %.2f dengan %.2f adalah %.2f\n", a, b, a*b);}
    else if(pilihan==4){
        printf("OUTPUT :\nHasil pembagian antara %.2f dengan %.2f adalah %.2f\n", a, b, a/b);}
    }
}