#include <stdio.h>
#include <math.h>
#include <conio.h>




int main (void){

	float b;

	printf("Escribe un n%cmero flotante/decimal:  ",163);
	scanf ("%f",&b);

	if (b>0.0){
		printf("La ra%cz cuadrada de %f es ",161,sqrt(b));
	}
		else{
			printf("No se le puede sacar ra%cz a %f.",161,b);
		}
	getch();	
	return 0;
} 