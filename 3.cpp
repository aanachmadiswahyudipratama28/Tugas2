#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char kalimat1[100];
	char kalimat2[100];
	
	cout<<"Massukkan Kalimat : ";
	gets(kalimat1);
	
	cout<<"Masukkan Kalimat Pengganti : ";
	gets(kalimat2);
	
	strcpy(kalimat1,kalimat2);
	cout<<kalimat1;
}
