#include<iostream>

using namespace std;

int main(){
	float a,b,result;
	
	cout<<"Enter the value of a: "; cin>>a;
	cout<<"Enter the value of b: "; cin>>b;
	
	result = (a/b) + 1;
	
	// ROUND NUMBER
	cout.precision(2);
	
	cout<<"\n The result is: "<<result;
	
	return 0;
}
