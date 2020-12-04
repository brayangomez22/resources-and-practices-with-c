#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int number, counting = 0;
		
	do{
	    cout<<"Enter a number: "; cin>>number;
	    if(number > 0){
	    	counting++;
		}
	}while(number != 0);
	
	cout<<"\nThe number of numbers you have typed greater than zero are: "<<counting<<endl;
		
	cout<<"\n";
	system("pause");
	return 0;
}
