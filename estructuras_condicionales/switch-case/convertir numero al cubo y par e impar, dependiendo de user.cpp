#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main(){
	int opc, num;
	float cube, result = 0;
	
	cout<<"1: Cube of a number"<<endl;
	cout<<"2: Odd or even number"<<endl;
	cout<<"3: Leave"<<endl;
	
	cout<<"\nChoose the desired option: "; cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"\nWhat number do you want to convert into a cube: "; cin>>cube;
			result = pow(cube,3);
			cout<<"\nResult: "<<result<<endl; break;
		case 2:
		    cout<<"\nWhat number do you want to know if it is even or odd: "; cin>>num;	
		    if(num%2==0){
		    	cout<<"\nThe number "<<num<<" is even"<<endl;
			}else{
				cout<<"\nThe number "<<num<<" is odd"<<endl;
			}
		case 3: break;	
	}
	
	system("pause");
	return 0;
}
