#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	double metros, centimetro;
	
	
	cout << "Digite quantos metros você deseja converter: \n";
	cin >> metros;
	
	centimetro = metros * 100;
	
	cout << "\n" << metros << " metros correspodem a " << centimetro << " centimetros.\n\n";
	
	system ("pause");
	return 0;	
}
