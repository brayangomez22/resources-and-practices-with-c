/*6. Escriba un programa que calcule x^y, donde tanto x como y son enteros 
positivos, sin utilizar la función pow.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int x,y,elevation=1;
	
	cout<<"Enter the value of x: ";cin>>x;
	cout<<"Enter the value of y: ";cin>>y;
	
	for(int i=1;i<=y;i++){
		elevation *= x;
	}
	
	cout<<"\nThe result of the elevation is: "<<elevation;
	
	getch();
	return 0;
}
