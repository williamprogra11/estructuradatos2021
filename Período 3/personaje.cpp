#include <iostream>
#include <string>

using namespace std;

class Personaje {
	private:
		string nombre; //Atributo nombre
		int puntosVida; //Atributo puntos de vida
	public:
		Personaje(string nombre, int puntosVida);
		void recibirGolpe(int puntosPerdidos); //Método Recibir Golpe
		bool estaVivo(); // Método Está vivo
		int getPuntosVida(); // Método obtener puntos de vida
		string getNombre(); // Método obtener nombre
		void comer(int puntosGanados); // Método comer
};

// Declarando el constructor
Personaje::Personaje(string nombre, int puntosVida){
	this->nombre = nombre;
	this->puntosVida = puntosVida;
}

string Personaje::getNombre(){
	return this->nombre;
}

int Personaje::getPuntosVida(){
	return this->puntosVida;
}

void Personaje::comer(int puntosGanados){
	if (puntosVida > 0){
		this->puntosVida += puntosGanados;
	} else {
		cout << " El personaje esta muerto y no tendra efecto! " << endl;
	}
}

void Personaje::recibirGolpe(int puntosPerdidos){
	if (puntosPerdidos > 0 && puntosPerdidos < this->puntosVida){
		this->puntosVida -= puntosPerdidos;
	} else if (puntosPerdidos > puntosVida) {
		this->puntosVida = 0;
		cout << "El personaje perdio todos sus puntos de vida! " << endl;
	} else {
		cout << " El dato no es valido! " << endl;
	}
}

bool Personaje::estaVivo(){
	if (puntosVida > 0){
		return true;
	} else {
		return false;
	}
}

int main() {
	string nombre;
	int puntosVida;
	int opcion;
	int pcomer;
	int pperder;
	
	cout << "Elija un nombre para su personaje: ";
	getline(cin, nombre);
	
	cout << "Elija la cantidad de puntos de vida para su personaje (Solo numeros enteros): ";
	cin >> puntosVida;
	
	Personaje personaje1(nombre, puntosVida);
	cout << "---- Estado del personaje ----" << endl;
	cout << "Nombre: " << personaje1.getNombre() << endl;
	cout << "Puntos de vida actuales: " << personaje1.getPuntosVida();
	
	// Funciones
	
	cout << " " << endl;
	cout << "---- Acciones disponibles ---- " << endl;
	cout << "1. Comer" << endl;
	cout << "2. Provocar dano" << endl;
	cout << "3. Chequear status" << endl;
	cout << "Elija la accion que desea ejecutar: " << endl;
	cin >> opcion;
	
	if (opcion == 1) {
		cout << "Cuantos puntos quiere recuperar?: ";
		cin >> pcomer;
		personaje1.comer(pcomer);
		cout << "La vida actual de tu personaje es: " << personaje1.getPuntosVida() << endl;
		cout << "------------------------------------------------";
	} else if (opcion == 2) {
		cout << "Cuantos puntos quiere danar?: ";
		cin >> pperder;
		personaje1.recibirGolpe(pperder);
		cout << "La vida actual de tu personaje es: " << personaje1.getPuntosVida() << endl;
		cout << "------------------------------------------------";
	} else if (opcion == 3) {
		if (personaje1.estaVivo()) {
			cout << "Tu personaje esta vivo! " << endl;
		} else {
			cout << "Tu personaje esta debilitado! " << endl;
		}
		//cout << "Tu personaje esta: " << personaje1.estaVivo() << endl;
	}
	
	return 0;
}
