#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int numeros[100], n;
	
	cout<<"digite el numeros de elementos asociados: "; cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"dime un numero: "; cin>>numeros[i];
	}
	
	for(int i=n; i<=0; i--){
		cout<<n;
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	 
	getch();
	return 0;
}
