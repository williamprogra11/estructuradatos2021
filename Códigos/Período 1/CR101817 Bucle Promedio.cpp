#include <iostream>

/* Utilizando bucles solicite a un usuario que introduzca cualquier cantidad de n�meros y al terminar de ejecutar el bucle que retorne el valor promedio de los n�meros ingresados. */

using namespace std;

int main () {
	
	int N, i = 1; // Definiendo variables de N (Total de n�meros) e i (contador para el condicional for)
	double num, suma = 0, prom; // num: n�mero que ir� ingresando el usuario. suma: total de todos los n�meros ingresados. prom: promedio.
	
	cout << "Seleccione la cantidad de numeros de los cuales desee obtener el promedio: ";
	cin >> N;
	
	while (N < 2) {
		cout << "Numero invalido. Seleccione un numero mayor a 1: "; // De esta manera, el usuario deber� ingresar m�nimo dos n�meros.
		cin >> N;
	}
	
	while (i<=N) { // Condicional que se ejecutar� N n�mero de veces seg�n la cantidad que el usuario haya elegido.
		cout << "Ingrese el " << i << "o. numero: "; 
		cin >> num;
		suma = suma + num;	// El total se ir� acumulando con todos los n�meros del usuario.
		i = i + 1;
	}
	
	prom = suma / N; // El promedio es igual a la suma de todos los n�meros entre el n�mero total de datos ingresados.
	
	cout << "El promedio de todos los numeros ingresados es: " << prom;
	
	return 0;
}


