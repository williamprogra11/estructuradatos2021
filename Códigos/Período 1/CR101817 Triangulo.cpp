#include <iostream>
#include <math.h>

/* 1 - Pida al usuario que ingrese los tres lados de un triangulo y en base a ello determine si es equil�tero, escaleno o is�sceles.
En base a la informaci�n, calcule el �rea de dicha figura.*/

using namespace std;

int main () {
	
	double l1, l2, l3, area;
		
	cout << "Ingrese los tres lados de un triangulo para calcular su area y determinar si es equilatero, isosceles o escaleno. \n";
	cout << "Ingrese el primer lado en cm: ";
	cin >> l1;
	while (l1 <= 0) {
		cout << "Dato no valido, ingrese un numero adecuado. \n"; //Incluido para no permitir ingresar ning�n n�mero negativo
		cout << "Ingrese el primer lado en cm: ";
		cin >> l1;
	}
	cout << "Ingrese el segundo lado en cm: ";
	cin >> l2;
	while (l2 <= 0) {
		cout << "Dato no valido, ingrese un numero adecuado. \n"; //Incluido para no permitir ingresar ning�n n�mero negativo
		cout << "Ingrese el segundo lado en cm: ";
		cin >> l2;
	}
	cout << "Ingrese el tercer lado en cm: ";
	cin >> l3;
	while (l3 <= 0) {
		cout << "Dato no valido, ingrese un numero adecuado. \n"; //Incluido para no permitir ingresar ning�n n�mero negativo
		cout << "Ingrese el tercer lado en cm: ";
		cin >> l3;
	}
		
	if ( l1 == l2 && l1 == l3 && l2 == l3) { // Si los tres lados son iguales
		area = (l1 * l1 * sqrt(3.0)) / 4; 		// La f�rmula para calcular el �rea de un tri�ngulo equil�tero es: (l^2 * 1.7320 / 4)  --  Dato: *1.7320 es la ra�z de 3*
		cout << "El area del triangulo es: " << area << " cm^2 \n";
		cout << "Este es un triangulo equilatero.";
	} else if ( l1 == l2 && l1 != l3 && l2 != l3) { // Si el primer y segundo lado son iguales y el tercero es diferente
		double altura;
		altura = sqrt (l1 * l1 - ((l3 * l3)/4)); // Para encontrar la altura de un tri�ngulo is�sceles usamos la f�rmula: ra�z cuadrada de ((a^2 - b^2) / 4)
		area = (l3 * altura) / 2; // Una vez con la altura, usamos la f�rmula: (b * h / 2)
		cout << "El area del triangulo es: " << area << " cm^2 \n";
		cout << "Este es un triangulo isosceles.";
	} else if ( l1 != l2 && l1 == l3 && l2 != l3) { // Si el primer y tercer lado son iguales y el segundo es diferente
		double altura;
		altura = sqrt (l1 * l1 - ((l2 * l2)/4)); // Mismo procedimiento que en la l�nea 42 de c�digo
		area = (l2 * altura) / 2;
		cout << "El area del triangulo es: " << area << " cm^2 \n";
		cout << "Este es un triangulo isosceles.";
	} else if ( l1 != l2 && l1 != l3 && l2 == l3) { // Si el segundo y tercer lado son iguales y el primero es diferente
		double altura;
		altura = sqrt (l2 * l2 - ((l1 * l1)/4)); // Mismo procedimiento que en la l�nea 42 y 48 de c�digo
		area = (l1 * altura) / 2;
		cout << "El area del triangulo es: " << area << " cm^2 \n";
		cout << "Este es un triangulo isosceles.";
	} else if ( l1 != l2 && l1 != l3 && l2 != l3) { // Si los tres lados son diferentes
		double semi;
		semi = (l1 + l2 + l3) / 2; // El semiper�metro se consigue utilizando la f�rmula: (l1 + l2 + l3) / 2
		area = sqrt (semi * (semi - l1) * (semi - l2) * (semi - l3)); 
		cout << "El area del triangulo es: " << area << " cm^2 \n";
		cout << "Este es un triangulo escaleno.";
	}
	
	return 0;
}
