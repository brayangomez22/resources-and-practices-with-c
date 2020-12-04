/* hacer un programa que intercambie el valor de dos variables */

#include<iostream>

using namespace std;

int main(){
	int x,y,aux;
	
	cout<<"Enter the value of x: "; cin>>x;
	cout<<"Enter the value of y: "; cin>>y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nThe new value of x is: "<<x<<endl;
	cout<<"\The new value of y is: "<<y<<endl;
	
	return 0;
}
