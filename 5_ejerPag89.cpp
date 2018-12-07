#include <stdio.h>
//como hacer un casteo? si se declara en 0?

//si un corredor en 1 hr recorre 10 kilometros, que distancia recorre en 15 minutos = 2.5km
main(){
	
	float minutos,km;
	
	printf("Ingrese los minutos que corrio: ");
	scanf("%f",&minutos);
	
	minutos = minutos * 10;
	km = minutos/60;
	
	printf("\nUsted corrio %.2f kilometros",km);
}
