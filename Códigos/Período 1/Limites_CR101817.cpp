#include <iostream>
#include <limits>

using namespace std;

//Alumno: William Eduardo Cruz Ruperto CR101817 - Estructura de Datos 2021

int main(){
    
    int intmin = std::numeric_limits<int>::min(); //Valor m�nimo de un Integer
    int intmax = std::numeric_limits<int>::max(); //Valor m�ximo de un Integer    
    
    cout << " El intmin es = " << intmin << endl;
    cout << " El intmax es = " << intmax << endl;
    cout << " Tamanio de int : " << sizeof(int) << endl;
    
    cout << endl;
    
    double doubmin = std::numeric_limits<double>::min(); //Valor m�nimo de un Double
    double doubmax = std::numeric_limits<double>::max(); //Valor m�ximo de un Double    
    
    cout << " El doubmin es = " << doubmin << endl;
    cout << " El doubmax es = " << doubmax << endl;
    cout << " Tamanio de double : " << sizeof(double) << endl;
    
    cout << endl;
    
    float floatmin = std::numeric_limits<float>::min(); //Valor m�nimo de un Float
    float floatmax = std::numeric_limits<float>::max(); //Valor m�ximo de un Float
    
    cout << " El floatmin es = " << floatmin << endl;
    cout << " El floatmax es = " << floatmax << endl;
    cout << " Tamanio de float : " << sizeof(float) << endl;
    
    cout << endl;
    
    short shortmin = std::numeric_limits<short>::min(); //Valor m�nimo de un Short
    short shortmax = std::numeric_limits<short>::max(); //Valor m�ximo de un Short    
    
    cout << " El shortmin es = " << shortmin << endl;
    cout << " El shortmax es = " << shortmax << endl;
    cout << " Tamanio de short : " << sizeof(short) << endl;
    
    cout << endl;
    
    char charmin = std::numeric_limits<char>::min(); //Valor m�nimo de un Char
    char charmax = std::numeric_limits<char>::max(); //Valor m�ximo de un Char
    
    cout << " El charmin es = " << charmin << endl;
    cout << " El charmax es = " << charmax << endl;
    cout << " Tamanio de char : " << sizeof(char) << endl;
    
    cout << endl;
    
    long longmin = std::numeric_limits<long>::min(); //Valor m�nimo de un Long
    long longmax = std::numeric_limits<long>::max(); //Valor m�ximo de un Long
    
    cout << " El longmin es = " << longmin << endl;
    cout << " El longmax es = " << longmax << endl;
    cout << " Tamanio de long : " << sizeof(long) << endl;
    
    cout << endl;
    
    bool boolmin = std::numeric_limits<bool>::min(); //Valor m�nimo de un Bool
    bool boolmax = std::numeric_limits<bool>::max(); //Valor m�ximo de un Bool
    
    cout << " El boolmin es = " << boolmin << endl;
    cout << " El boolmax es = " << boolmax << endl;
    cout << " Tamanio de bool : " << sizeof(bool) << endl;
    
    cout << endl;
    
    return 0;
    }
