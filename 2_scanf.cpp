#include <stdio.h>

int main(){
	char nombre[20];
	int edad;
	double altura;
	
	printf("Ingrese su nombre: ");
	//scanf permite leer datos a través del teclado y los asigna en las variables que le pasemos como argumento
	scanf("%s",nombre);
	
	printf("ingrese su edad: ");
	scanf("%d",&edad);
	
	printf("Ingrese su altura: ");
	scanf("%lf",&altura);
	
	printf("Ud. es %s, tiene %d anios y una altura de %lf metros\n"
			,nombre
			,edad
			,altura);
	
	return 0;
	
	/*scanf lee desde el teclado valores alfanuméricos.Luego,
	dependiendo de la máscara, convierte estos valores en los 
	tipos de datos que corresponda y los asigna en sus respectivas variables*/
}
