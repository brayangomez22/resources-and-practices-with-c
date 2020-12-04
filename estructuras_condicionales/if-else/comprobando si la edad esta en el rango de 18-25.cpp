#include<iostream>
using namespace std;
int main(){
	int age;
	
	cout<<"Enter your age: "; cin>>age;
	
	if( (age >= 18)&&(age <= 25) ){
		cout<<"\nYour age is in the range of: [18-25]";
	}else{
		cout<<"\nYour age is not in the range of: [18-25]";
	}
	
	return 0;
}
