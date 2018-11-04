#include <stdio.h>

int main(){
	
	int n;
	
	printf("Ingrese un valor: ");
	scanf("%d",&n);
	
	// % retorna el resto (o valor residual) que se obtiene luego de efectuar la división entera de sus operandos
	if(n%2 ==0){
		printf("%d es par\n"
				,n);
	}else{
		printf("%d es impar\n"
				,n);
	}
	
	return 0;
	
}
