#include <iostream>

using namespace std;

int main () {
	
	int *p;
	int i;
	int k;
	i = 42;
	k = i;
	p = &i; 
	
	*p = 75;
	
	cout << "i = " << i << endl;
	cout << "k = " << k << endl;
	cout << "p = " << p << endl;
	
	//*p = 75;
	
	cout << "i = " << i << endl;
	
	return 0;
}
