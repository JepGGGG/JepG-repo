#include <stdio.h>
int main(){
	int a,b,c;
	printf("dame el primer numero\n");
	scanf("%d",&a);
	
	printf("dame el segundo numero\n");
	scanf("%d",&b);
	
	printf("dame el tercer numero\n");
	scanf("%d",&c);
	if (a==1 && b==2 && c==3){
		printf("acceso permitido \n");
	}
	else {
	 printf("acceso denegado\n");
	}
	return 0;
}    