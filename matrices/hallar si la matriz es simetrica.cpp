#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main (){
	int numeros[100][100], filas, columnas;
	char bandera = 'f';
	
	cout<<"digie el numero de filas: "; cin>>filas;
	cout<<"digite el numero de columnas: "; cin>>columnas;
	
	for( int i=0; i<filas; i++ ){
		for( int j=0; j<columnas; j++ ){
			cout<<"digite un numero ["<<i<<"]["<<j<<"]: "; cin>>numeros[i][j];
		}
	}
	
	if(filas == columnas ){
		for( int i=0; i<filas; i++ ){
			for( int j=0; j<columnas; j++ ){
				if(numeros[i][j] == numeros[j][i] ){
					bandera = 'v';
				}
			}
		}
	}
	
	if(bandera == 'v' ){
		cout<<"\nla matriz es simetrica";
	}else{
		cout<<"\nla matriz no es simetrica";
	}
	getch();
	return 0;
}
