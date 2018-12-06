#include <iostream>   //flujos de entrada:cin>> y salida cout<<
using namespace std;
#include <stdio.h>

//en un zoológico desean saber cuántos niños menores de 10 años ingresan los días Domingo
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
   cout<<" "<<cant<<" Niño(s) menore(s) de 10 años"<<endl;
	
	system("Pause");
} 
