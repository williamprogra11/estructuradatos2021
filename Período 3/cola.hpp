#include "listagenerica.hpp"
#include <string>

template <typename TIPODATO>
class Cola : private Lista<TIPODATO>{
	public:
		// Constructor
		Cola();
		// Agregar un elemento al final de la cola
		enqueue(TIPODATO item);
		// Remover un elemento al inicio de la cola
		TIPODATO dequeue();
		bool estaColaVacia();
		string colaComoCadena();
};

template<typename TIPODATO>
Cola<TIPODATO>::Cola(){
	Lista<TIPODATO> Lista;
}

template<typename TIPODATO>
Cola<TIPODATO>::enqueue(TIPODATO item){
	this->adjuntar(item);
}

template<typename TIPODATO>
TIPODATO Cola<TIPODATO>::dequeue(){
	return this->remover(0);
}

template<typename TIPODATO>
bool Cola<TIPODATO>::estaColaVacia(){
	return this->estaVacia();
}

template<typename TIPODATO>
string Cola<TIPODATO>::colaComoCadena(){
	return this->comoCadena();
}
