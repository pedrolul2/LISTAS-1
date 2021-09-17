#include<stdio.h>
/////preciso de ajuda com o resto/////
int main(){
  int control;
    float n1,n2,adicao,subtracao,mult,divisao,resto;
    printf("Insira um valor\n");
    scanf("%f",&n1);
    printf("insira outro valor\n");
    scanf("%f",&n2);
printf("Diite 1 para adicao\n");
printf("Digite 2 para subtracao\n");
printf("Digite 3 para multiplicacao\n");
printf("Digite 4 para divisao\n");
printf("digite 5 para o resto da divisao\n");
scanf("%d",&control);
switch(control){
    case 1:
    adicao=n1+n2;
    printf("O Resultado e:%.f",adicao);
    break;
    case 2:
    subtracao=n1-n2;
    printf("O resultado e:%.f",subtracao);
    break;
    case 3:
    mult=n1*n2;
    printf("O resultado e:%.f",mult);
    break;
    case 4:
    divisao=n1/n2;
    printf("O resultado e %.f",divisao);
    break;

    

}

}
