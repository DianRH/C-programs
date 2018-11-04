#include <stdio.h>

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
	* multiplicación
	/ división (cociente)
	% módulo,resto o valor residual*/
}
