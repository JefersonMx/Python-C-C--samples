#include <stdio.h>
#include <conio.h>
int main (void){

	int a,b;
	

	printf("Inserte el primer n%cmero\n",163);
	scanf ("%d",&a);
	printf("Inserte el segundo n%cmero\n",163);
	scanf("%d",&b);

	if (a>=b){
		printf ("El n%cmero %d es mayor que  %d \n",163,a,b );
	}
	else{
		printf("El n%cmero %d es mayor que %d\n",163,b,a );
	}
	getch();
	return 0;
}