#include <stdio.h>
/*PROBLEMA
Dado un valor numérico entero, informar si es par o impar*/

int main(){
	
	int n;
	
	printf("Ingrese un valor: ");
	scanf("%d",&n);
	
	// % retorna el resto (o valor residual) que se obtiene luego de efectuar la divisi�n entera de sus operandos
	if(n%2 ==0){
		printf("%d es par\n"
				,n);
	}else{
		printf("%d es impar\n"
				,n);
	}
	
	return 0;
	
}
