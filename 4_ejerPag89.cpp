#include <iostream>   //flujos de entrada:cin>> y salida cout<<
using namespace std;
#include <stdio.h>

//en un zool�gico desean saber cu�ntos ni�os menores de 10 a�os ingresan los d�as Domingo
main(){
	
	int edad, cant=0;	

 
while(edad!=0)
{

		 cout<<"Ingresa la edad del nino: "; 
 		 cin>>edad;
 
	 if(edad<10 && edad!=0)
 	{	
 	 	
 		cant = cant + 1;  
	}	  	
	 
 }
   cout<<" "<<cant<<" Ni�o(s) menore(s) de 10 a�os"<<endl;
	
	system("Pause");
} 
