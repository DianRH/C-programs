#include <stdio.h>
/*PROBLEMA
Se ingresa un valor numérico de 8 digitos que representa una fecha con el siguiente formato aaaammdd.Esto es:
los 4 primeros digitos representan el año, los siguientes 2 digitos representan el mes y los 2 digitos restantes
representan el dia.Se pide informar por separado el dia, el mes y el año de la fecha ingresada*/
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
