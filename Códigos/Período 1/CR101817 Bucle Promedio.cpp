#include <iostream>

/* Utilizando bucles solicite a un usuario que introduzca cualquier cantidad de números y al terminar de ejecutar el bucle que retorne el valor promedio de los números ingresados. */

using namespace std;

int main () {
	
	int N, i = 1; // Definiendo variables de N (Total de números) e i (contador para el condicional for)
	double num, suma = 0, prom; // num: número que irá ingresando el usuario. suma: total de todos los números ingresados. prom: promedio.
	
	cout << "Seleccione la cantidad de numeros de los cuales desee obtener el promedio: ";
	cin >> N;
	
	while (N < 2) {
		cout << "Numero invalido. Seleccione un numero mayor a 1: "; // De esta manera, el usuario deberá ingresar mínimo dos números.
		cin >> N;
	}
	
	while (i<=N) { // Condicional que se ejecutará N número de veces según la cantidad que el usuario haya elegido.
		cout << "Ingrese el " << i << "o. numero: "; 
		cin >> num;
		suma = suma + num;	// El total se irá acumulando con todos los números del usuario.
		i = i + 1;
	}
	
	prom = suma / N; // El promedio es igual a la suma de todos los números entre el número total de datos ingresados.
	
	cout << "El promedio de todos los numeros ingresados es: " << prom;
	
	return 0;
}


