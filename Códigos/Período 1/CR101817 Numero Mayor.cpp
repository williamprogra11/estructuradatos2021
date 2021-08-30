#include <iostream>

/* Utilizando condicionales (if ... else, etc) elabore una funci�n que solicite 5 n�meros al usuario y luego le indique el n�mero mayor. */

void determinarNumero (double n1, double n2, double n3, double n4, double n5); // Definiendo los prototipos

using namespace std;

int main () {
	
	double n1, n2, n3, n4, n5; // Variables a utilizar
	
	cout << "Ingrese 5 numeros y le indicaremos cual es el mayor:" << endl;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;
	cin >> n5;
	
	determinarNumero (n1, n2, n3, n4, n5); // Utilizando la funci�n que hemos creado: determinarNumero.
	
	return 0;
}

void determinarNumero (double n1, double n2, double n3, double n4, double n5) { // Funci�n que utilizaremos para evaluar cu�l n�mero de los ingresados es mayor
	
	double nmayor; // Variable que utilizaremos para representar al n�mero de valor m�s alto de la sucesi�n
	
	if(n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5) { // Si el primer n�mero es el mayor de todos
		nmayor = n1;
	} else if(n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5) { // Si el segundo n�mero es el mayor de todos
		nmayor = n2;
	} else if(n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5) { // Si el tercer n�mero es el mayor de todos
		nmayor = n3;
	} else if(n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5) { // Si el cuarto n�mero es el mayor de todos
		nmayor = n4;
	} else if(n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4) { // Si el quinto n�mero es el mayor de todos
		nmayor = n5;
	}
	std::cout << "El numero mayor de la sucesion es: " << nmayor; // El programa imprime el resultado, as� utilizamos la variable nmayor y solo imprimimos una vez
}
