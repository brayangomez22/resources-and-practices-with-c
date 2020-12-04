#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero, factorial = 1;
	
	cout<<"digite un numero: "; cin>>numero;
	
	for(int i = 1; i <= numero; i++){
		factorial *= i;
	}
	
	cout<<"\nEl factorial del numero es: "<<factorial;
	
	return 0;
}
