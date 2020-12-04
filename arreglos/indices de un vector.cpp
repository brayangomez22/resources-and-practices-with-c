#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100], n;
	
	cout<<"digite el numero de elmentos asociados: "; cin>>n;
	
	for( int i = 0; i < n; i++ ){
		cout<<"digite un numero: "; cin>>numeros[i];
	}
	
	for( int i = 0; i < n; i++ ){
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	
	getch();
	return 0;
}
