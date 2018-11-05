#include <stdio.h>
/*PROBLEMA
Leer dos valores númericos enteros e informar su cociente*/
int main(){
	
	int a,b;
	double cociente;
	
	printf("Ingrese dos valores: ");
	scanf("%d %d",&a,&b);
	
	if(b==0){
		printf("Error, no puedo dividir por cero");
	}else{
		
		cociente = (double)a/b; // casting convertir datos de un tipo a otro
		printf("el resultado es: %d / %d = %lf\n"
				,a
				,b
				,cociente);
	return 0;
	}
	
	/*Operadores
	+ suma
	- resta
	* multiplicaci�n
	/ divisi�n (cociente)
	% m�dulo,resto o valor residual*/
}
