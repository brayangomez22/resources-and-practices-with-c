#include<iostream>

using namespace std;

int main(){
	
	cout.precision(1);
	cout.setf(ios::fixed);
	
	double practica, teorica, participacion, nota_final;
	
	cout<<"digite la nota de practica: "; cin>>practica;
	cout<<"dogite la nota teorica: "; cin>>teorica;
	cout<<"digite la nota de particpacion: "; cin>>participacion;
	
	practica *= 0.20;
	teorica *= 0.30;
	participacion *= 0.50;
	nota_final = practica + teorica + participacion;
	
	cout<<"\nla nota final del estudiante es: "<<nota_final;
	
} 

