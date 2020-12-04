#include<iostream>
using namespace std;
int main(){
	int number;
	
	cout<<"1: january"<<endl;
	cout<<"2: february"<<endl;
	cout<<"3: march"<<endl;
	cout<<"4: april"<<endl;
	cout<<"5: may"<<endl;
	cout<<"6: june"<<endl;
	cout<<"7: july"<<endl;
	cout<<"8: august"<<endl;
	cout<<"9: september"<<endl;
	cout<<"10: october"<<endl;
	cout<<"11: november"<<endl;
	cout<<"12: december"<<endl;
	
	cout<<"\nTell me a number according to the desired month: "; cin>>number;
	
	switch(number){
		case 1: cout<<"\nThe desired month is january"; break;
		case 2: cout<<"\nThe desired month is february"; break;
		case 3: cout<<"\nThe desired month is march"; break;
		case 4: cout<<"\nThe desired month is april"; break;
		case 5: cout<<"\nThe desired month is may"; break;
		case 6: cout<<"\nThe desired month is june"; break;
		case 7: cout<<"\nThe desired month is july"; break;
		case 8: cout<<"\nThe desired month is august"; break;
		case 9: cout<<"\nThe desired month is september"; break;
		case 10: cout<<"\nThe desired month is october"; break;
		case 11: cout<<"\nThe desired month is november"; break;
		case 12: cout<<"\nThe desired month is december"; break;
		default: cout<<"\nThere is no month for that number";break;
	}
	
	return 0;
}
