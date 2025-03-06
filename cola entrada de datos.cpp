#include <iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//prototipos

void insertarCola(Nodo *&, Nodo *&, int );
bool colaVacia(Nodo *frente);


int main(){
	Nodo *frente = 	NULL;
	Nodo *fin = NULL;
	
	return 0;
}

void insertarCola(Nodo *&frente, Nodo *&fin, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if(colaVacia(frente)){
        frente = nuevo_nodo;
    }
    else{
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;

}

bool colaVacia(Nodo *frente){
	return (frente == NULL)? true: false;
}