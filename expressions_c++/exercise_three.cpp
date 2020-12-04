#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,e,f,result = 0;
	
	cout<<"Enter the value of a: "; cin>>a;
	cout<<"Enter the value of b: "; cin>>b;
	cout<<"Enter the value of c: "; cin>>c;
	cout<<"Enter the value of d: "; cin>>d;
	cout<<"Enter the value of e: "; cin>>e;
	cout<<"Enter the value of f: "; cin>>f;
	
	result = (a + (b/c)) / (d + (e/f));
	
	cout.precision(2);
	
	cout<<"\nThe result is: "<<result;
	
	return 0;
}
