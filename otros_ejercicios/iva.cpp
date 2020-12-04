/* escriba un programa que de la entrada estandar pida el precio de un producto y en la salida estandar muestre el 
precio del producto al aplicarle el IVA */

#include<iostream>

using namespace std;

int main(){
	float precio,iva,precioFinal;
	
	cout<<"Digite el precio el producto: ";
	cin>>precio;
	
	iva = precio*0.21;
	precioFinal = precio+iva;
	
	cout<<"\n El precio final es de: "<<precioFinal<<endl;
	
	
	return 0;
}
