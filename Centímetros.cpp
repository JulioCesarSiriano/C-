#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	double metros, centimetros;
	
	cout << "Digite quantos cent�metros voc� deseja converter: \n";
	cin >> centimetros;
	
	metros = centimetros * 0.01;
	
	cout << "\n" << centimetros <<" cent�metros correspodem a " << metros << " metros.\n\n";
	
	system("pause");
	return 0;
}
