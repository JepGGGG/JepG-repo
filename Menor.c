#include <stdio.h>
int main(){
	int n1,n2,n3,n4,n5,n;
	printf("dame el primer numero\n");
	scanf("%d",&n1);
	printf("dame el segundo numero\n");
	scanf("%d",&n2);
	printf("dame el tercer numero\n");
	scanf("%d",&n3);
	printf("dame el cuarto numero\n");
	scanf("%d",&n4);
	printf("dame el quinto numero\n");
	scanf("%d",&n5);
	
	n=n1;
	if(n2<n){
		n=n2;
	}
	if(n3<n){
	   n=n3;
	}
	if(n4<n){
	 n=n4;
	}
	if(n5<n){
	 n=n5;
	}
	printf("el menor es %d\n",n);
	return 0;
}    