#include <iostream>
#include <string.h>
using namespace std;

int main () {
	char kalimat [100];
	int jum_kata;
	
	cout<<"Masukkan Kalimat : ";
	cin. getline(kalimat, sizeof(kalimat));
	
	jum_kata = 0;
	for (int x=0; kalimat [x]; x++);
	jum_kata ++;
	
	cout<< cin.gcount() - 1;
	 
	return 0;
}
