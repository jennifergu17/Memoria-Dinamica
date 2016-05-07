//============================================================================
// Name        : Implementacion.cpp
// Author      : Jennifer
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Estudiante{
	string nombre;
	int edad;
	int nota;
	Estudiante *siguiente;

};

Estudiante *primero;

int main() {
Estudiante nodo;
nodo.nombre="Jennifer";
nodo.edad = 1;
nodo.nota = 100;
nodo.siguiente = NULL;

Estudiante nodo2;
nodo2.nombre="Jeannette";
nodo2.edad=2;
nodo2.nota=200;
nodo2.siguiente=NULL;

primero=&nodo;
primero->siguiente=&nodo;
cout<< nodo.siguiente->nombre<<endl;
cout<< nodo.siguiente->edad<<endl;
cout<< nodo.siguiente->nota<<endl;
cout<<"*****************************"<<endl;
primero=&nodo;
primero->siguiente=&nodo2;
cout<< nodo.siguiente->nombre<<endl;
cout<< nodo.siguiente->edad<<endl;
cout<< nodo.siguiente->nota<<endl;

return 0;

}


