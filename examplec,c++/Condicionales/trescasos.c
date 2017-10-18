#include <stdio.h>

int main(void){


	int a;

	printf("Introduce un entero\n");
	scanf("%d",&a);

	if( a %2 == 0){
		printf("El valor de  %d es par ",a );
	}
	else {
		printf ("El valor de %d es impar ",a);
	}
	else if (a==0){
		printf("El valor de a es nulo.\n");
	}
	
	if (a<0) {
		printf("y negativo");
	}
	else {
		printf("y positivo");
	}	

	return 0;


}
