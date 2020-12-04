#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	int numeros, elevacion = 0, suma = 0;
	
	cout<<"digite el numero de elementos a sumar: "; cin>>numeros;
	
	for(int i = 1; i <= numeros; i++){
		elevacion = pow(2,i);
		suma += elevacion;
	}
	
	cout<<"\nEl resultado es: "<<suma;

	getch();
	return 0;
}
