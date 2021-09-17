#include<stdio.h>
int main(){
    int numero;
    printf("insira um numero de 0 a 5:\n");
    scanf("%d",&numero);
    switch(numero){

     case 0:
    printf("numero 0");
    break;
    
    case 1:
    printf("numero um");
    break;

    case 2:
    printf("numero dois");
    break;

    case 3:
    printf("numero tres");
    break;

    case 4:
    printf("numero quatro");
    break;

    case 5:
    printf("Numero Cinco");
    break;
    }
}