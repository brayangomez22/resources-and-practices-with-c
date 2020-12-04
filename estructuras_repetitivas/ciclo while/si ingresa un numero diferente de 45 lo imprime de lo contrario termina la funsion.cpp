#include<iostream>

using namespace std;

int main(){
	
	int num;
	
	cout<<"dime un numero entero: ";
	cin>>num;
	
	while(num != 45){
		cout<<num<<endl;
		cout<<"\n dime de nuevo un nuemro par: ";
		cin>>num;
	}
	
	return 0;
}
