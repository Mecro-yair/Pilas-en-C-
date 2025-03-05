#include <iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarNodo(Nodo *&, int);
void quitarNodo(Nodo *&, int &);
void mostrarNodo(Nodo *&);
int main(){
	int dato;
	Nodo *pila = NULL;
	cout <<"\nDigite un dato: "; cin>>dato;
	agregarNodo(pila,dato);
	cout << "\nMostrando informacion de los elementos de la pila"<<endl;
	mostrarNodo(pila);
	cout <<"\nDigite un dato: "; cin>>dato;
	agregarNodo(pila,dato);
	cout << "\nMostrando informacion de los elementos de la pila"<<endl;
	mostrarNodo(pila);
	quitarNodo(pila,dato);
	cout << "\nMostrando informacion de los elementos de la pila"<<endl;
	mostrarNodo(pila);
	cout<<"\nla variable tiene como valor "<<dato;
	return 0;
}
void mostrarNodo(Nodo *&pila){
	if(pila == NULL){
		return;
	}else if(pila != NULL){
		cout << pila->dato<<" ";
		mostrarNodo(pila->siguiente);
	}
}
void agregarNodo(Nodo *&pila, int n){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato = n;
	nuevoNodo->siguiente= pila;
	pila = nuevoNodo;
	cout << "Se agrego el dato: "<<n<<endl;
}

void quitarNodo(Nodo *&pila,int &n){
	Nodo *aux = pila;
	pila = aux->siguiente;
	n = pila->dato;
	delete aux;
}