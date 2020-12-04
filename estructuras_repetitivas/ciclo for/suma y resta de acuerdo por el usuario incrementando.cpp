#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros, suma = 0;
	
	cout<<"digite el numero de elementos: "; cin>>numeros;
	
	for(int i = 1; i <= numeros; i++){
		suma += i + 2 + numeros - 1;
	}
	
	cout<<"\nEl resultado es: "<<suma;
	
	getch();
	return 0;
}
