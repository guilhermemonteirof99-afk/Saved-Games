#include <stdio.h>
#include <math.h>

int area_sala(int largura ,int comprimento){
int a;
a=(largura*comprimento);

return a;
}

int main(){

int largura_user , comprimento_user;
double tempo;

printf("agora digite a largura e o comprimento para sapermos a area de limbeza\n");

scanf("%d%d",&largura_user,&comprimento_user);

int area_comprida= area_sala(largura_user,comprimento_user);
printf("certo essa e a area [%d]\n",area_comprida);

tempo =(double)area_comprida/5.0;

int resul =(int)ceil(tempo);

printf("O robô de limpeza levará %d minutos para limpar a sala.\n",resul);

return 0;
}