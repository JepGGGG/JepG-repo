#include<stdio.h>
int main(){
  int Base,BaseMayor,BaseMenor,Altura,Largo,ancho;
  int op;
  float area;
  printf("ingrese que quiere calcular\n");
  printf("1)Area de un triangulo \n");
  printf("2)Area de un trapecio \n");
  printf("3)Area de un rectangulo\n");
  scanf("%d",&op);
  
  switch(op){
  	case 1:
  		printf("Seleccionado Area de un triangulo \n");
  		printf("ingrese base \n"); scanf("%d",&Base);
  		printf("ingrese Altura \n"); scanf("%d",&Altura);
  		area=(Base*Altura)/2;
  		printf("El area del triangulo es de %.2f \n",area);
  		break;
  	case 2:
  		printf("Seleccionado Area de un trapecio \n");
  		printf("ingrese base Mayor \n"); scanf("%d",&BaseMayor);
  		printf("ingrese base Menor \n"); scanf("%d",&BaseMenor);
  		printf("ingrese Altura \n"); scanf("%d",&Altura);
  		area=(BaseMayor+BaseMenor)*(Altura)/2;
  		printf("El area del trapecio es de %.2f \n",area);
  		break;
  	case 3:
  		printf("Seleccionado Area de un rectangulo \n");
        printf("ingrese lado menor \n"); scanf("%d",&Largo);
  		printf("ingrese lado mayor \n"); scanf("%d",&ancho);
        area=Largo*ancho;
        printf("El area del rectangulo es de %.2f \n",area);
  		break;
  }
  printf("Muchas gracias por utilizar\n");
  return 0;
}
