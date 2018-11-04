#include <stdio.h>

int main(){
	char nombre[] = "Paulina";
	int edad = 20;
	double altura = 1.75;
	           
	//printf permite mostrar datos en la consola
	printf("Mi nombre es %s, tengo %d anios y mido %lf metros.\n"
			,nombre
			,edad
			,altura);
	
	return 0;
	
}
