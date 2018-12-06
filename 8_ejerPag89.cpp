#include <iostream>
using namespace std;

//clasifique una serie de 20 números en pares.Indique cuántos impares resultaron
main(){
	
	int i, num, impar=0;
	
	for(i=1; i<=20; i++){
		
		cout<<"Ingrese numero:\t"; //\t para generar espacios en blanco
		cin>>num;
		
		if(num%2!=0){
			
			impar = impar + 1;
		}	
	}
	
	cout<<"Total de numeros impares = "<<impar<<endl;
	
	
	return 0;
}
