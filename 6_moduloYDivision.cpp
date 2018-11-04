#include <stdio.h>

int main(){
	
	long f;
	int anio,mes,dia;
	int resto;
	
	printf("Ingrese una fecha: ");
	scanf("%ld",&f);
	
	anio = f / 10000;
	resto = f% 10000;
	mes = resto/100;
	dia = resto % 100;
	
	printf("Dia: %d \n Mes: %d \n Anio:%d"
			,dia
			,mes
			,anio);
	
	return 0;
}
