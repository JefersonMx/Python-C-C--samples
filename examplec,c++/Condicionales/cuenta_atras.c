#include <stdio.h>

int main(void){

	int a;

	printf("Introduce un entero a\n");
    scanf ("%d",&a);

    while (a>=0){
    	printf("%d\n",a);
    	a-=1;
    }
    printf("¡Boomb!\n");
	
	return 0;
}