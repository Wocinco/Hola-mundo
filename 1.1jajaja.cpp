//============================================================================
// Name        : Hola mundo.cpp
// Author      : marco
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>//inclullendo biblioteca
using namespace std;
//metodo saludar


void Saludar(char*nombre){
	cout << "hola_" << nombre << endl;// imprime hola cesar
}

//metodo principal
int main() {
	Saludar("cesar");

	return 0;
}
