#include<iostream>

using namespace std;

int main(){
	int number;
	
	cout<<"Enter a positive or negative number: "; 
	cin>>number;
	
	if(number==0){
		cout<<"\nThe number is 0";
	}
	else if(number>0){
		cout<<"\nThe number is positive, which is: "<<number;
	}
	else{
		cout<<"\nThe number is negative, which is: "<<number;
	}
	
	return 0;
}
