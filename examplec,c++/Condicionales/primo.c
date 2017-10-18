#include <stdio.h>

int main (void){

	int a,b;

	printf("Introduzca un valor a:");
	scanf ("%d", &a);

	b=2;

	while (b<=a){
		if (a %b ==0){
			break;
		}
		b+=1;
	}
	/* Sentencia si es primo o compuesto*/
	if (b==a){
		printf("%d es primo",a );
	}
	else {
		printf("%d es compuesto",a );
	}
	/*Sentencia si es par o impar*/
	if( a %2 == 0){
		printf(",es par ");
	}
	else {
		printf (",es impar ");
	}
	/*Sentencia si es nulo,positivo o negativo*/
	if (a==0){
		printf("y  es nulo.\n");
	}
	
	else if (a<0) {
		printf("y negativo.");
	}
	else {
		printf("y positivo.");
	}	


	return 0;
}