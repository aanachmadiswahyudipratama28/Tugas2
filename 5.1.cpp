#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main (){
	
	int i, jum;
	char string[100];
	cout<<"Masukkan Sembarang Kalimat : \n";
	cin.getline(string,100);
	
	if((string[0]>='A')&&(string[0]<='Z'))
	string[0]=(char)string[0]+32;
	
	jum=0; int d=1;
	for(i=0; i<(int)strlen(string); i++){
		if(i%2==0){
			if((string[jum]>='A')&&(string[jum]<='Z'))
			string[jum]=(char)string[jum]+32;
			jum++;
		}
	}
	for(i=1; string[i]!='\0'; i++){
		if(string[i]==' ') d++;
		if((i-1-d)%1==0){
			if(string[i+1]>='A'&& string[i+1]<='Z')
			string[i+1]=(char)(string[i+1]+32);
		}
	}
	cout<<"Hasil Akhir : "<<string<<endl;
	getch();
}
