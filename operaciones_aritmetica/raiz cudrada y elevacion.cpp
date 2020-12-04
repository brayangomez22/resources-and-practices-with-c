#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float x,y, resultado = 0;
	
	cout<<"digite el valor de x: "; cin>>x;
	cout<<"digite el valor de y: "; cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	cout<<"\nel resultado es: "<<resultado;
	
	return 0;
}
