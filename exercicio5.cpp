#include<stdio.h>
int main(){
    int numero;
    printf("INSIRA UM NUMERO:\n");
    scanf("%d",&numero);
    if(numero%2==0){
        printf("Este numero e par\n")
    }
    else{
        printf("Este numero e impar\n");
    }
}