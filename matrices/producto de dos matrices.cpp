#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int matriz1[3][3] = { {1,2,3} , {4,5,6} , {7,8,9}};
	int matriz2[3][3] = { {4,3,2} , {1,5,6} , {9,8,7}};
	
	cout<<"matriz uno:\n"<<endl;
	
	for( int i=0; i<3; i++ ){
		for( int j=0; j<3; j++ ){
			cout<<matriz1[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nmatriz dos:\n"<<endl;
	
	for ( int i=0; i<3; i++ ){
		for( int j=0; j<3; j++ ){
			cout<<matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	
	cout<<"\nmultiplicacion de matrices:\n"<<endl;
	
	for( int i=0; i<3; i++ ){
		for( int j=0; j<3; j++ ){
			cout<<matriz1[i][j] * matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
