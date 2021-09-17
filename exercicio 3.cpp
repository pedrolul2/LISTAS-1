#include<stdio.h>
#include<math.h>

int main(){
    ///// ARMAZENAMENTO DE DADOS////////
    int numero,raiz,quadrado,cubo,logaritmo;
  printf("insira um valor inteiro\n");
  scanf("%d",&numero);
///////PROCESSAMENTO DE INFORMAÇÕES//////
raiz=sqrt(numero);
quadrado=pow(numero,2);
cubo=pow(numero,3);
logaritmo=log(numero);
///////RESULTADOS//////
printf("A raiz quadrada desse número é::\n%d",raiz);
printf("O resultado do quadrado desse numero é\n%d",quadrado);
printf("O valor deste numero ao cubo\n%d",cubo);
printf("O valor do logartimo desse numero e:\n%d",logaritmo);

}