#include <stdio.h>
/*PROBLEMA
Leer dos valores numéricos enteros e indicar cual es el mayor y cual es el menor.Considerar que ambos valores 
son diferentes*/
int main(){
	
	int a,b;
	int mayor, menor;
	
	printf("Ingrese dos valores: ");
	scanf("%d %d",&a,&b);
	
	if(a>b){
		
		mayor = a;
		menor = b;
		
	}else{
	
	
		mayor = b;
		menor = a;
	}
	
	printf("Mayor: %d\n",mayor);
	printf("Menor: %d",menor);
	
	return 0;
}

