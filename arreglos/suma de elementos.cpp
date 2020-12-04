#include<iostream>
#include<math.h>
using namespace std;

int main (){
	int c,n, cantidadElementos=0,medio,sumaAbajo=0,sumaArriba=0, resultado=0;
	
	cin >> c;
	
	for(int i=0; i<c; i++){
		resultado=0;
		
		cin >> n;
		
		int vector[n];
		
		for(int j=0; j<n; j++){
			cin >> vector[j];
			cantidadElementos++;
		}
			
		if(cantidadElementos%2 == 0){
			medio = cantidadElementos/2;
			
			for(int k=0; k<medio; k++){
				sumaAbajo +=  vector[k]; 
			}
			
			for(int k=medio; k<n; k++){
				sumaArriba +=  vector[k]; 
			}
			
			resultado += sumaAbajo * sumaArriba;
		}
		
		if(cantidadElementos%2 == 1){
			medio = cantidadElementos/2;
			round(medio);
			
			for(int k=0; k<medio; k++){
				sumaAbajo +=  vector[k];
			}
			
			for(int k=medio+1; k<n; k++){
				sumaArriba +=  vector[k];
			}
			
			resultado += sumaAbajo * sumaArriba;
		}
		
		cout<<resultado<<endl;
	}
	
	return 0;
}
