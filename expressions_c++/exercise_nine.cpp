#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float x,y,result = 0;
	
	cout<<"Enter the value of x: "; cin>>x;
	cout<<"Enter the value of y: "; cin>>y;
	
	result = (sqrt(x)) / (pow(y,2)-1);
	
	cout<<"\nThe result is: "<<result<<endl;


	return 0;
}
