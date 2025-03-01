#include <iostream>
#include <windows.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void agregarNodo(Nodo *&pila,int n){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato = n;
	nuevoNodo->siguiente = pila;
	pila = nuevoNodo;
	
	cout << "\nNuevo elemento "<<n<<" agregado a la pila correctamente.\n";
}
void agregardatos(){
	int n;
	Nodo *pila= NULL;
	int dato;
	cout << "\nCuantos elementos agregará?\n"; cin >> n;
	for(int i=0;i<n;i++){
		cout << "\nDigite el Dato: "<<i+1<<" :\n";
		cin >>dato;
		agregarNodo(pila,dato);
	}
	cout << "\n||--Los "<<n<<" datos fueron agregados correctamente.||\n";
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	agregardatos();
	return 0;
}