#include <iostream>
#include "cola.hpp"
#include "pila.hpp"
#include "listagenerica.hpp"

using std::string;
using std::cin;
using std::cout;
using std::endl;

bool es_palindromo(string expresion){
	Pila<char> unaPila;
	Cola<char> simulacion;
	
	for(size_t i=0; i < expresion.length(); i++){
		char caracter = expresion[i];
		
		unaPila.push(caracter);
		simulacion.enqueue(caracter);
		
		cout << caracter << endl; // Se puede borrar después
		
		if(caracter == caracter){
			//
			cout << unaPila.pilaComoCadena() << endl;
		} else if ( caracter != caracter) {
			if(unaPila.estaPilaVacia()){
				return false;
			}
			cout << unaPila.pilaComoCadena() << endl;
		}
	}
	return unaPila.estaPilaVacia();
}

int main() {
	string cadena;
	cout << "Ingrese una expresion: " << endl;
	cin >> cadena;
	if (es_palindromo(cadena)){
		cout << "La palabra es un palindromo";
	} else {
		cout << "La palabra no es un palindromo";
	}
	return 0;
}

