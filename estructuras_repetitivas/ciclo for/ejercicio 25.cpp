#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n, suma = 0;
	
	cout<<"digite el numero de elementos "; cin>>n;
	
	for(int i = 1; i <= n; i++){
		suma += i;
	}
	
    cout<<"\nla suma es: "<<suma<<endl;

	
	system("pause");
	return 0;
}
