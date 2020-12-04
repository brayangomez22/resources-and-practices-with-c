//vamos a sumar a+b y luego sumarle al resultado 1

#include<iostream>

using namespace std;

int main(){
	
	float  a,b, resultado = 0;
	
	cout<<"dime el valor de a: "; 
	cin>>a;
	cout<<"dime el valor de b: "; 
	cin>>b;
	
	resultado = (a / b) + 1;
	
	cout<<"\nel resultado es: " <<resultado;
	
	return 0;
}
