#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	double metros, centimetros;
	
	cout << "Digite quantos centímetros você deseja converter: \n";
	cin >> centimetros;
	
	metros = centimetros * 0.01;
	
	cout << "\n" << centimetros <<" centímetros correspodem a " << metros << " metros.\n\n";
	
	system("pause");
	return 0;
}
