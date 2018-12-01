#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	
	#define LIBRA 453.592 //grs
	#define PIES .3048 //metros

//	const float LIBRA = 453.592;
//	const float PIES = .3048;
		
	double conversion, grs, resultLibra, metros, resultKg, resultPie;
	char opcion;
	
	printf("�Que conversion desea hacer?\n\n a) kg a libras\n b) m a pies\n c) libras a kg\n d) pies a m\n\n");
	scanf("%c",&opcion);
	
	printf("Ingrese un valor: ");
	scanf("%lf",&conversion);
	
	switch(opcion){
		
		case 'a':
			grs = conversion * 1000; //grs
			resultLibra = grs / LIBRA;
			
			printf("\n%.2f kg = %.2f libras\n",conversion,resultLibra);
			break;
			
		case 'b':
			metros = conversion / PIES;
			
			printf("\n%.2f m = %.2f pies\n",conversion,metros);
			break;
			
		case 'c':
			grs = conversion * LIBRA;
			resultKg = grs / 1000;//grs
			
			printf("\n%.2f libra(s) = %.2f kg(s)\n",conversion,resultKg);
			break;
			
		case 'd':
			resultPie = conversion * PIES;
			
			printf("\n%.2f pie(s) = %.2f metro(s)\n",conversion,resultPie);
			break;
		
	}
	
	system("Pause");
}
