#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numbers[100][100], rows, columns;
	
	cout<<"Enter the number of rows: ";
	cin>>rows;
	
	cout<<"Enter the number of columns: ";
	cin>>columns;
	
	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
			cout<<"Enter a number ["<<i<<"]["<<j<<"] - ";
			cin>>numbers[i][j];
		}
	}
	
	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
			cout<<numbers[i][j];
		}
		cout<<"\n";
	}
	
	return 0;
}
