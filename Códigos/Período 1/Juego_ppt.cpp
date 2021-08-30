#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

// Prototipos
std::string generarMovimientoComputadora();
std::string obtenerMovimientoJugador();
void determinarGanador(std::string computadora, std::string jugador);
void procesarEntradaJugadorPiedra(std::string computadora);
void procesarEntradaJugadorPapel(std::string computadora);
void procesarEntradaJugadorTijera(std::string computadora);
void procesarEntradaJugadorLagarto(std::string computadora);
void procesarEntradaJugadorSpock(std::string computadora);

int main() {
	using namespace std;
	
	string movimientoComputadora;
	string movimientoJugador;
	
	movimientoJugador = obtenerMovimientoJugador();
	movimientoComputadora = generarMovimientoComputadora();
	determinarGanador(movimientoComputadora, movimientoJugador);
	
	return 0;
}

// Implementación
	std::string generarMovimientoComputadora() {
	std::string movimiento;
	int numeroAleatorio;
	
	// Genera número aleatorio
	srand(time(0));
	numeroAleatorio = rand() % 5 + 1;
	
	switch(numeroAleatorio) {
		
		case 1:
			movimiento = "piedra";
			break;
		case 2:
			movimiento = "papel";
			break;
		case 3:
			movimiento = "tijera";
			break;
		case 4:
			movimiento = "lagarto";
			break;
		case 5:
			movimiento = "spock";
			break;
	}
	
	std::cout << "Computadora: " << movimiento << "\n";
	
	return movimiento;
}

std::string obtenerMovimientoJugador() {
	using namespace std;
	string movimiento;
	
	cout << "Piedra, papel, tijera, lagarto o spock (para terminar el juego, escriba salir): ";
	cin >> movimiento;
	
	if (movimiento == "salir") {
		
		cout << "Terminando ejecucion\n";
		
		return 0;
	}
	return movimiento;
}

void determinarGanador(std::string computadora, std::string jugador) {
	if (computadora == jugador) {
		std::cout << "Empate!\n";
	}
	else if (jugador == "piedra") {
		procesarEntradaJugadorPiedra(computadora);
	}
	else if (jugador == "papel") {
		procesarEntradaJugadorPapel(computadora);
	}
	else if (jugador == "tijera") {
		procesarEntradaJugadorTijera(computadora);
	}
	else if (jugador == "lagarto") {
		procesarEntradaJugadorLagarto(computadora);
	}
	else if (jugador == "spock") {
		procesarEntradaJugadorSpock(computadora);
	}
	else {
		std::cout << "Entrada no valida. Ingrese piedra, papel, tijera, lagarto o spock.\n";
	}
}

void procesarEntradaJugadorPiedra(std::string computadora) {
	if (computadora == "papel") {
		std::cout << "La computadora gana. Papel cubre piedra.\n";
	}
	else if (computadora =="tijera") {
		std::cout << "Usted gana. Piedra aplasta tijeras.\n";
	}
	else if (computadora =="lagarto") {
		std::cout << "Usted gana. Piedra aplasta al Lagarto.\n";
	}
	else if (computadora =="spock") {
		std::cout << "La computadora gana. Spock desintegra a la Piedra.\n";
	}
}

void procesarEntradaJugadorPapel(std::string computadora) {
	if (computadora == "tijera") {
		std::cout << "La computadora gana. Tijera corta papel.\n";
	}
	else if (computadora =="piedra") {
		std::cout << "Usted gana. Papel cubre piedra.\n";
	}
	else if (computadora =="lagarto") {
		std::cout << "La computadora gana. Lagarto devora al Papel.\n";
	}
	else if (computadora =="spock") {
		std::cout << "Usted gana. Papel desaprueba a Spock.\n";
	}
}

void procesarEntradaJugadorTijera(std::string computadora) {
	if (computadora == "piedra") {
		std::cout << "La computadora gana. Piedra aplasta tijeras.\n";
	}
	else if (computadora =="papel") {
		std::cout << "Usted gana. Tijera corta papel.\n";
	}
	else if (computadora =="lagarto") {
		std::cout << "Usted gana. Tijera decapita al Lagarto.\n";
	}
	else if (computadora =="spock") {
		std::cout << "La computadora gana. Spock aplasta las Tijeras.\n";
	}
}

void procesarEntradaJugadorLagarto(std::string computadora) {
	if (computadora == "piedra") {
		std::cout << "La computadora gana. Piedra aplasta al Lagarto.\n";
	}
	else if (computadora =="papel") {
		std::cout << "Usted gana. Lagarto devora al Papel.\n";
	}
	else if (computadora =="tijera") {
		std::cout << "La computadora gana. Tijera decapita al Lagarto.\n";
	}
	else if (computadora =="spock") {
		std::cout << "Usted gana. Lagarto envenena al Spock.\n";
	}
}

void procesarEntradaJugadorSpock(std::string computadora) {
	if (computadora == "piedra") {
		std::cout << "Usted gana. Spock desintegra a la Piedra.\n";
	}
	else if (computadora =="papel") {
		std::cout << "La computadora gana. Papel desaprueba a Spock.\n";
	}
	else if (computadora =="lagarto") {
		std::cout << "La computadora gana. Lagarto envenena al Spock.\n";
	}
	else if (computadora =="tijera") {
		std::cout << "Usted gana. Spock aplasta las Tijeras.\n";
	}
}
