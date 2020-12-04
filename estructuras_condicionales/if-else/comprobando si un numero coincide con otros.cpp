#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3,n4;
	
	cout<<"Tell me the first number: "; cin>>n1;
	cout<<"Tell me the second number: "; cin>>n2;
	cout<<"Tell me the third number: "; cin>>n3;
	
	cout<<"\nEnter a fourth number: "; cin>>n4;
	if( (n4==n1)||(n4==n2)||(n4==n3) ){
		cout<<"\nThe fourth number matches at least one of the three above";
	}else{
		cout<<"\nThe fourth number does not match the first three";
	}
	return 0;
}
