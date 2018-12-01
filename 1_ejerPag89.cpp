#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main(){
	
	int a,b,c;  //6 10 -4  
	float rx1,rx2,raiz,result;
	
	printf("Ingrese los valores de a,b y c: ");
	scanf("%d %d %d",&a,&b,&c);
	
	raiz = pow(b,2) -(4 * (a*c));
	result= sqrt(raiz);     	//14
	
	if (result < 0){
		
		printf("No se puede realizar la raiz porque es negativa");
		
	}	else{
		
		rx1 = (-b + raiz) / (2*a);
		rx2 = (-b - raiz) / (2*a);
	}
	
	printf("x1 = %.2f\n",rx1); //0-33
	printf("x2 = %.2f\n",rx2); //-2
		
system("Pause");
	
}
