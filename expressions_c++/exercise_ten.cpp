#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a,b,c,resultOne = 0,resultTwo = 0;
	
	cout<<"Enter the value of a: "; cin>>a;
	cout<<"Enter the value of b: "; cin>>b;
	cout<<"Enter the value of c: "; cin>>c;
	
	resultOne = (-b + (sqrt(pow(b,2) - (4*a*c)))) / (2*a);
	resultTwo = (-b - (sqrt(pow(b,2) - (4*a*c)))) / (2*a);
	
	cout<<"\nThe result 1 is: "<<resultOne<<endl;
	cout<<"\nThe result 2 is: "<<resultTwo<<endl;
	
	return 0;
}
