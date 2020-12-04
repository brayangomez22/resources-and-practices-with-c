#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros, suma = 0;
	
	cout<<"digite la cantidad de numeros a sumar: "; cin>>numeros;
	
	for(int i = 1; i <= numeros; i++){
		suma += i;
	}
	
	cout<<"\nLa suma es: "<<suma;
	
	getch();
	return 0;
}
