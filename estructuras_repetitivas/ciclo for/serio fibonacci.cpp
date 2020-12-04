#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n, x=0, y=1, z=0;
	
	cin>>n;
	
	for(int i = 0; i < n; i++){
		z = x+y;
		cout<<"Fib("<<i<<") = "<<z<<endl;
		x = y;
		y = z;
	}

	return 0;
}
