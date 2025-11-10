#include <stdio.h>


int main() {
 
    char operador_user;
    float num1, num2, resultado;
while (1){


    printf("antes de calcular que operção matematica vc que faser\n");
    printf("voce pode usar [+,-,*,/]\n");
    printf("se guiser sair da calculadora digite [exit]");


   
    scanf(" %c", &operador_user);
    if (operador_user == 'exit' || operador_user =='EXIT'){
      printf("encerrando a calculadora\n");
      break;
}
   
   
    if (operador_user == '+') {
        printf("ok agora cologue os numeros para somar:\n ");


       
        scanf("%f %f", &num1, &num2);


        resultado = num1 + num2;


        printf("aqui esta a soma: %.2f\n", resultado);
 }
   
    else if (operador_user == '-')
    {
    printf("agora vamos subitrair cologue os numeros\n ");        
    scanf("%f%f",&num1,&num2);
    resultado= num1-num2;
    printf("aqui esta a soma: %.2f\n", resultado);
 }
    else if (operador_user == '*')
    {
    printf("agora vamos mutiplicar cologue os numeros\n ");
    scanf("%f%f",&num1,&num2);
    resultado=num1*num2;
    printf("aqui esta a soma: %.2f\n", resultado);
 }
    else if (operador_user == '/')
    {
    printf("agora vamos dividir cologue os numeros\n");
        scanf("%f%f",&num1,&num2);
        resultado= num1/num2;
        printf("aqui esta a soma: %.2f\n", resultado);    
 }
 else{
 printf("cologue um numero valido\n");
 }        




}
    return 0;
}

