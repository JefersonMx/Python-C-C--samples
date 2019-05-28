#include <stdio.h>
#include <math.h>

int main(void){
	int a,b,i;
	float s;
	
	/* Pedir límites inferior y superior*/
	printf("Límite inferior:");
	scanf ("%d", &a);
	while (a<0){
		printf ("No puede ser negativo\n");
		printf ("Límite inferior:");
		scanf ("%d",&a);
	}
	
	
	printf ("Límite superior:");
	scanf ("%d", &b);
	while (b<a) {
		printf ("No puede ser menor que %d\n", a);
		printf (" Límite superior");
		scanf ("%d", &b);
	}
	
	/* Calcular el sumatorio de la raíz cuadrada de i para i entre a y b*/
	s= 0.0;
	for (i=a; i<=b; i++){
		s+=sqrt(i);
	}
	
	/* Mostrar el resultado*/
	printf ("El sumatorio de raices: ");
	printf ("de %d a %d: %f\n",a,b,s);
	
	return 0;
	
}

