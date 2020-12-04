/* escriba un programa que lea 3 notas de un alumno y calcule la nota final media del alumno */

#include<iostream>

using namespace std;

int main(){
	float note1,note2,note3,finalNote;
	
	cout<<"Enter note one: "; cin>>note1;
	cout<<"Enter note two: "; cin>>note2;
	cout<<"Enter note three: "; cin>>note3;
	
	finalNote = (note1 + note2 + note3) / 3;
	
	cout.precision(2);
	
	cout<<"\nThe final note is: "<<finalNote;
	
	return 0;
}
