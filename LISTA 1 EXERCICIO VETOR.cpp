#include<stdio.h>

int main(){
    int vet[4],soma=0,rep;
    for(rep=0;rep<4;rep++){
         printf("Insira o primeiro numero inteiro\n");
         scanf("%d",&vet[rep]);
    }
        for(rep=0;rep<4;rep++){
            soma=soma+vet[rep];
        }
        printf("A soma dos valores são:\n%d",soma );
        

}