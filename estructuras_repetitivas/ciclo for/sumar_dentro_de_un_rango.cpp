#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int number, sum = 0;
	
	do{
		
		cout<<"Enter a number: "; cin>>number;
		
	    if( number > 0 ){
		   sum += number;	
		}
					
	}while( ( (number < 20) || (number > 30) ) && (number != 0) );
	
	cout<<"\nThe sum is: "<<sum<<endl;
	
	system("pause");
	return 0;
}
