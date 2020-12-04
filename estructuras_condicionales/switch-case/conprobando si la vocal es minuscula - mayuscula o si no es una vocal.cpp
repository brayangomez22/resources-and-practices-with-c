#include<iostream>
using namespace std;
int main(){
	char lyrics;
	
	cout<<"Enter a vowel: "; cin>>lyrics;
	
	switch(lyrics){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"\nIs a lowercase vowel";break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"\nIs a capital vowel";break;
		default : cout<<"\nIt is not a vowel";break;
	}
	
	return 0;
}
