#include<iostream>

using namespace std;

int main(){
	int number;	
	
	cout<<"Enter a number: "; cin>>number;
	
	if(number == 0){
		cout<<"\nThe number is 0";
	}else if(number%2==0){
		cout<<"\nThe number is even";
	}else{
		cout<<"\nThe number is odd";
	}
	
	return 0;
}
