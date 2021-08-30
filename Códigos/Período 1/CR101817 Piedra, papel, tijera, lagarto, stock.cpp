#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
	int movJug;
	cout << "Juguemos a piedra, papel, tijera, lagarto o spock, selecciona tu movimiento: \n";
	cout << "1. Piedra \n2. Papel \n3. Tijera \n4. Lagarto \n5. Spock \n";
	cin >> movJug;
	
	if (movJug > 5 or movJug < 1) {
		cout << "El dato introducido no es correcto, ingrese uno en el parametro establecido \n";
		cin >> movJug;
	}
	
	srand(time(0));
	string movComp;
	int numMov = rand() % 5 + 1;
	
	switch(numMov) {
		
		case 1:
			movComp = "Piedra";
			break;
		case 2:
			movComp = "Papel";
			break;
		case 3:
			movComp = "Tijera";
			break;
		case 4:
			movComp = "Lagarto";
			break;
		case 5:
			movComp = "Spock";
			break;
	}
	
	cout << "La computadora escogio: " << movComp << endl;
	
	if (movJug == numMov) {
		cout << "Empate \n";
	} else if ( (movJug == 1) && (numMov == 3) ) {
		cout << "Ganaste - Piedra aplasta a Tijera\n";
	} else if ( (movJug == 2) && (numMov == 1) ) {
		cout << "Ganaste - Papel envuelve a Piedra\n";
	} else if ( (movJug == 3) && (numMov == 2) ) {
		cout << "Ganaste - Tijera corta al Papel\n";
	} else if ( (movJug == 1) && (numMov == 4) ) {
		cout << "Ganaste - Piedra aplasta al Lagarto\n";
	} else if ( (movJug == 4) && (numMov == 5) ) {
		cout << "Ganaste - Lagarto envenena al Stock\n";
	} else if ( (movJug == 5) && (numMov == 3) ) {
		cout << "Ganaste - Spock aplasta las Tijeras\n";
	} else if ( (movJug == 3) && (numMov == 4) ) {
		cout << "Ganaste - Tijera decapita al Lagarto\n";
	} else if ( (movJug == 4) && (numMov == 2) ) {
		cout << "Ganaste - Lagarto devora al Papel\n";
	} else if ( (movJug == 2) && (numMov == 5) ) {
		cout << "Ganaste - Papel desaprueba a Stock\n";
	} else if ( (movJug == 5) && (numMov == 1) ) {
		cout << "Ganaste - Spock desintegra a la Piedra\n";
	} else {
		cout << "Perdiste \n";
	}
	return 0;
}
