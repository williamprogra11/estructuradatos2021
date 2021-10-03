#include <iostream> // Entrada/Salida
#include <array> 	// Arreglos
#include <cstdlib> 	// Random
#include <ctime>	// Inicializar Random
#include <cctype>	// Funciones para caracteres
#include <string>	// Funciones para cadenas

using namespace std;
// William Eduardo Cruz Ruperto CR101817
const int Elementos = 25; // Declarando la constante llamada "Elementos"

// Algunas de las franquicias de videojuegos más vendidas
array<string,Elementos> franquicias = {
		"Assassin's Creed", "Battlefield", "Call of Duty",
		"Diablo", "Dragon Quest", "Fallout", "Final Fantasy",
		"Gran Turismo", "Grand Theft Auto", "Halo", "Just Dance", 
		"Metal Gear", "Minecraft", "Need for Speed", "Resident Evil", 
		"Star Wars", "Street Fighter", "Super Mario", "Super Smash Bros", 
		"Tetris", "The Elder Scrolls", "The Legend of Zelda", 
		"The Sims", "Tomb Raider", "Uncharted" 
};

// Elige al azar uno de los elementos del arreglo
string elegirElemento(array<string, Elementos> &arr);

// Inicializa la palabra del jugador con guiones bajos
// Devuelve la cantidad de letras a adivinar en la palabra
int inicializarRespuesta(char respuesta[], string palabra);

// Solicita al usuario que ingrese una letra y la devuelve a la función donde se invoca
char pedirLetra(char respuesta[]);

// Valida si la letra ingresada es parte de la palabra
int validarLetra(char respuesta[], string palabra, char letra);

// Dibuja la figura de un ahorcado
void dibujarAhorcado(int errores, int letrasRestantes, string palabra);

//Jugar al ahorcado
void jugar();

// ELegir una opción del menú
int elegirOpcion();

// Realizar búsqueda binaria de un arreglo
int busquedaBinaria(array<string, Elementos> &arr, string valor);

// Busca una franquicia ingresada por el usuario en el arreglo de franquicias
void buscarFranquicia();

int main() {
	int opcion;
	opcion = elegirOpcion();
	while (opcion != 3) {
		switch (opcion) {
			case 1:
					jugar();
					break;
			case 2:
					buscarFranquicia();
					break;
		}
		cout << endl;
		opcion = elegirOpcion();
	}
	cout << "Que tenga un buen día." << endl;
	return 0;
}

int elegirOpcion() {
	int opcion;
	cout << "Que desea hacer? " << endl;
	cout << "1 - Jugar al ahorcado" << endl;
	cout << "2 - Buscar mi franquicia favorita" << endl;
	cout << "3 - Salir" << endl;
	cout << "Su eleccion: "<< endl;
	cin >> opcion;
	while (cin.fail() || !(opcion >= 1 && opcion <= 3)) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Opcion no valida. Su eleccion: ";
		cin >> opcion;
	}
	cout << endl;
	return opcion;
}

void jugar() {
	string palabra = elegirElemento(franquicias);
		char respuesta[25];
		char letra;
		int letrasRestantes = inicializarRespuesta(respuesta, palabra);
		int intentosFallidos = 0;
		int letrasCorrectas = 0;
		
		cout << "Jugar al ahorcado" << endl;
		while (letrasRestantes > 0 && intentosFallidos < 7) {
			letra = pedirLetra(respuesta);
			letrasCorrectas = validarLetra(respuesta, palabra, letra);
			if (letrasCorrectas > 0) {
				letrasRestantes -= letrasCorrectas;
			}
			else {
				intentosFallidos++;
			}
			dibujarAhorcado(intentosFallidos, letrasRestantes, palabra);
		}
}

// Inicializa la palabra del jugador con guiones bajos
// Devuelve la cantidad de letras a adivinar en la palabra
int inicializarRespuesta(char respuesta[], string palabra) {
	int longitudPalabra = palabra.length();
	int cantidadLetras = 0;
	for (int i = 0; i < longitudPalabra; i++) {
			char caracter = palabra.at(i);
			if (isalpha(caracter)) {
				respuesta[i] = '_';
				cantidadLetras++;
			}
			else {
				respuesta[i] = caracter;
			}
	}
	respuesta[longitudPalabra] = '\0'; // Caracter de fin de cadena
	return cantidadLetras;
}

// Elige al azar uno de los elementos del arreglo
string elegirElemento(array<string, Elementos> &arr) {
	// Variable estática, "recuerda" su valor, Se usa para plantar la semilla en el generador de números aleatorios solo una vez
	static bool semillaPlantada = false;
	if (!semillaPlantada) {
		srand(time(NULL));
		semillaPlantada = true;
	}
	
	// Genera un número aleatorio entr 0 y 24 y devuelve el número en ese índice
	int indice = rand() % arr.size();
	return arr[indice];
}

char pedirLetra(char respuesta[]) {
	char letra;
	cout << "Ingrese la letra que desea escribir: ";
	
	cin >> letra;
	
	while (!(isalpha(letra))) {
		cin.clear(); // Limpia la entrada estandar
		cin.ignore(10000, '\n'); // Descarta la entrada hasta encontrar un salto de línea
		cout << "No es un caracter valido." << endl; // Muestra un mensaje de error
		cout << "Ingrese la letra que desea escribir: ";
		cin >> letra;
	}
	
	return letra;
}

int validarLetra(char respuesta[], string palabra, char letra) {
	int veces = 0;
	for (int i = 0; i < palabra.length(); i++) {
		if (tolower(palabra.at(i)) == tolower(letra) && respuesta [i] != palabra.at(i)) {
			respuesta[i] = palabra.at(i);
			veces++;
		}
	}
	return veces;
}

void dibujarAhorcado(int errores, int letrasRestantes, string palabra) {
	cout << "Intentos fallidos: " << errores << endl;
	cout << "       " << endl;
	cout << "   _____" << endl;
	cout << "  |     |" << endl;
	cout << "  |     " << (errores > 0 ? "o" : "") << endl;
	cout << "  |    " << (errores > 1 ? "/" : "") << (errores > 3 ? "|" : " ") << (errores > 2 ? "\\" : "") << endl;
	cout << "  |     " << (errores > 4 ? "|" : "") << endl;
	cout << "  |    " << (errores > 5 ? "/" : " ") << (errores > 6 ? "\\" : "") << endl;
	cout << " _|_" << endl;
	cout << "|   |______" << endl;
	cout << "|          |" << endl;
	cout << "|__________|" << endl << endl ;
	if (errores > 6) {
		cout << "Te has ahorcado." << endl;
		cout << "La franquicia era: " << palabra << endl;
	}
	else if (letrasRestantes == 0) {
		cout << "Felicidades! Has adivinado. La franquicia era: " << palabra << endl;
	}
}

int busquedaBinaria(array<string, Elementos> &arr, string valor) {
	int inferior = 0; // Estableciendo el límite inferior
	int superior = (int)franquicias.size() - 1; // Estableciendo el límite superior
	int medio;
	string valorBuscado = valor; // Asignando el valor ingresado a una variable con la que trabajaremos
	int indice = -1; // Valor de la posición en el arreglo donde se encuentra la franquicia
	
	while (inferior <= superior) {
		medio = inferior + (superior - inferior)/2; // Estableciendo el valor medio
				
		if (valorBuscado == franquicias[medio]){
			indice = medio;
			cout << "Encontrado: " << medio << " -> " << franquicias[medio] << endl; // Indica que si el valor encontrado se encuentra en el medio, apuntará a esa posición y dará el nombre
			break;
		}
		else if (valorBuscado == franquicias[superior]){
			indice = superior;
			cout << "Encontrado: " << superior << " -> " << franquicias[superior] << endl; // Indica que si el valor encontrado se encuentra en el superior, apuntará a esa posición y dará el nombre
			break;
		}
		else if (valorBuscado == franquicias[inferior]){
			indice = inferior;
			cout << "Encontrado : " << inferior << " -> " << franquicias[inferior] << endl; // Indica que si el valor encontrado se encuentra en el inferior, apuntará a esa posición y dará el nombre
			break;
		}
		else {
			inferior = inferior + 1; // Si el valor no es encontrado, aumentará en 1 el límite inferior
			superior = superior - 1; // Si el valor no es encontrado, disminuirá en 1 el límite superior
		}
	}
	
	return indice;
}
		
void buscarFranquicia() {
	string franquicia;
	int posicion;
	cin.clear();
	cin.ignore(1000, '\n');
	
	cout << "Buscar una franquicia en el top 25 de ventas" << endl;
	cout << "Nombre de la franquicia: ";
	getline(cin, franquicia);
	
	if (busquedaBinaria(franquicias, franquicia) != -1)
		cout << "Genial! Su franquicia esta en el top 25" << endl;
	else
		cout << "Su franquicia no es tan comercial, sus gustos son refinados." << endl;
}
