#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float temperature,higher=0,less=999;
	float totalAmount=0,average=0;
	
	for(int i=0; i<24; i+=4){
		cout<<"Enter the emperature of the hour "<<i<<": ";
		cin>>temperature;	
	
		totalAmount += temperature;
		
		if(temperature > higher){
			higher = temperature;
		}	
		if(temperature < less){
			less = temperature;
		}
	}
	
	average =  totalAmount/6;
	
	cout<<"\nAverage temperature: "<<average<<endl;
	cout<<"highest temperature: "<<higher<<endl;
	cout<<"lower temperature: "<<less<<endl;
	
	getch();
	return 0;
}
