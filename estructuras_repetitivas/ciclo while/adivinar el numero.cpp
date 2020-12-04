#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main (){
	int numero, dato, intentos = 0;
	
	srand(time(NULL)); //agrega numero aleatorio;
	dato = 1 + rand()%(100);
	
	do{
		
		cout<<"digite un numero: "; cin>>numero;
		
		if(numero > dato ){
			cout<<"\ndigite un numero menor\n";
		}
		if(numero < dato){
			cout<<"\ndigite un numero mayor\n";
		}
		intentos++;
	}while(numero != dato);
	
	cout<<"\nFELICIDADES HAS ADIVINADO EL NUMERO\n";
	cout<<"\nnumero de intentos: "<<intentos<<endl;
	
	system("pause");
	return 0;
}
