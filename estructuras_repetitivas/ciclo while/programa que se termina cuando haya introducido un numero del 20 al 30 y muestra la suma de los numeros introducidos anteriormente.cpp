#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	char nombre[10];
	int numero, suma = 0;
	
	cout<<"Dime tu nombre: "; cin>>nombre;
	
	do{
		cout<<"digite un numero: "; cin>>numero;
		if(numero > 0){
			suma += numero;
		}
	}while( ( (numero < 20) || (numero > 30) ) && (numero != 0) );
	
	cout<<"\nHola "<<nombre<<" la suma de todos los números digitados anteriormente es de: "<<suma;
	
	cout<<"\n";
	system("pause");
	return 0;
}
