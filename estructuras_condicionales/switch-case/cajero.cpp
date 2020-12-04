#include<iostream>
using namespace std;
int main(){
	int initial_balance = 1000, opc; 
	float extra, final_balance = 0, retirement;
	
	cout<<"Welcome to your ATM"<<endl;
	cout<<"1: Deposit money into account: "<<endl;
	cout<<"2: Withdraw money from account: "<<endl;
	cout<<"3: Leave"<<endl;
	cout<<"\nChoose the desired option: "; cin>>opc;
	
	switch(opc){
		case 1: 
		    cout<<"\nEnter the amount of money to enter your account: "; cin>>extra;
		    final_balance = initial_balance + extra;
		    cout<<"\nNow you have: "<<final_balance<<" in his account"; break;    
		case 2:
		    cout<<"\nEnter the amount of money to withdraw: "; cin>>retirement;
			if(retirement > initial_balance){
				cout<<"\nDoes not have that amount of money";
			}else{
				final_balance = initial_balance - retirement;	
				cout<<"\nNow you have: "<<final_balance<<" in his account";
			}
		case 3: break;	
	}
	
	return 0;
}
