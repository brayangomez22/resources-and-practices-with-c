#include<iostream>

using namespace std;

int main(){
	int n1,n2;
	
	cout<<"Enter the first number: "; cin>>n1;
	cout<<"Enter the second number: "; cin>>n2;
	
	if(n1 == n2){
		cout<<"\nBoth numbers are the same";
	}else if(n1 > n2){
		cout<<"\nThe first number is the highest, that is: "<<n1;
	}else{
		cout<<"\nThe second number is the highest, that is: "<<n2;
	}
	
	return 0;
}
