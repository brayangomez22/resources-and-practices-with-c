#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float hick1, hick2, hypotenuse;
	
	cout<<"Enter the value of hick one: "; cin>>hick1;
	cout<<"Enter the value of hick two: "; cin>>hick2;
	
	hypotenuse = sqrt(pow(hick1,2) + pow(hick2,2));
	
	cout<<"\nThe hipotenuse of the triangle is: "<<hypotenuse<<endl;
	
	return 0;
}
