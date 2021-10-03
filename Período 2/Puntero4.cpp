#include <iostream>

using namespace std;

int main () {
	
	char bloques[3] = {'A','B','C'};
 	char *ptr = &bloques[0];
 	char temp;
 	
 	temp = bloques[0]; // __________
 	cout << "temp = bloques[0] = " << temp << endl;
 	
 	temp = *(bloques + 2); // __________
 	cout << temp << endl;
 	temp = *(ptr + 1); // __________
 	cout << temp << endl;
 	temp = *ptr; // __________
 	cout << temp << endl;
 	
 	ptr = bloques + 1; // __________
 	cout << ptr << endl;
 	
 	temp = *ptr; // __________
 	cout << temp << endl;
 	temp = *(ptr + 1); // __________
 	cout << temp << endl;
 	
 	ptr = bloques; // __________
 	cout << ptr << endl;
 	
 	temp = *++ptr; // __________
 	cout << temp << endl;
 	temp = ++*ptr; // __________
 	cout << temp << endl;
 	temp = *ptr++; // __________
 	cout << temp << endl;
 	temp = *ptr; // __________
 	cout << temp << endl;
 	
 	cout << (void*)ptr << endl;
 	
 	return 0;

}
