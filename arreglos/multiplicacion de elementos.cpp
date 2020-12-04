#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros [] = {1,2,3,4,5};
	int multiplicacion = 1;
	
	for( int i = 0; i < 5; i++){
		multiplicacion *= numeros[i];
	}
	
	cout<<"la multiplicacion de los numeros son: "<<multiplicacion<<endl;
	
	getch();
	return 0;
}
