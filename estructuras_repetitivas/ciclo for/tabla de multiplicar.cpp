#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int number;
	
	do{
		cout<<"Enter a number to give you the multiplication table as a result: "; cin>>number;
	}while( (number<1) || (number>10) );
	
	for(int i=1; i<=20; i++){
		cout<<number<<" * "<<i<<" = "<<number*i<<endl;
	}
	
	cout<<"\n";
	system("pause");
	return 0;
}
