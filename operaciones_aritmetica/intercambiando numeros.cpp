// vamos a intercambiar los valores de x y de y

#include<iostream>

using namespace std;

int main(){
	
	int x,y,auxiliar;
	
	cout<<"dime el valor de x: ";
	cin>>x;
	
	cout<<"dime el valor de y: ";
	cin>>y;
	
	auxiliar = x;
	x = y;
	y= auxiliar;
	
	cout<<"\nel nuevo valor de x es: "<<x<<endl;
	cout<<"el nuevo valor de y es: "<<y;
	
	return 0;
}

