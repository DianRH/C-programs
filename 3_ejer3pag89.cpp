#include <iostream>   //flujos de entrada:cin>> y salida cout<<
using namespace std;

//calcule la edad promedio de un numero de empleados, al ingresar un cero se terminara el programa para calcular la edad.
main(){      // 24, 45, 23, 30, 45   promedio =33.4
	
	int num,cant=0,suma=0;
	float prom;
	
	cout<<"Ingresa un valor: ";
	cin>>num;
	
	
	while(num!=0){  //cuando se ingrese un cero la condición ya no se cumplira y ya no pedira el ingreso de otro valor
		
		suma = suma+num; // el primer numero es 24 suma = 0+24 (24); segundo numero 45 suma = 24+45 (69); tercer numero suma = 69+23 (92) etc...
		cant = cant+1; // el primer nuemro a ingresar cant = 0+1; el segundo cant = 1+1 (2) etc.. 
		
		
	cout<<"\nIngresa otro valor: ";
	cin>>num;
		
	} 
	
	prom = (float) suma/cant;  
	
	cout<<"\nLa edad promedio es = "<<prom <<" e ingresaste "<<cant<<" edades"<<endl;
	
	system("Pause");
}
