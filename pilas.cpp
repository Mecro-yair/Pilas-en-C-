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
	
	cout << "\nElemento "<<n<<" agregado a la pila correctamente.\n";
}
void agregardatos(Nodo *&pila){
	int n;
	int dato;
	cout << "\nCuantos elementos agregará?\n"; cin >> n;
	if(n<=0){
		cout << "⚠️"<<" No se puede agregar "<<n<<" elementos.\n\n";
		agregardatos(pila);
	}else{
		for(int i=0;i<n;i++){
			cout << "\nDigite el Dato: "<<i+1<<" --> "; cin >>dato;
			agregarNodo(pila,dato);
		}
		cout << "\n||-- ✅ Los "<<n<<" datos fueron agregados correctamente.||\n";		
	}
}

void mostrarPila(Nodo *aux){
	if(aux==NULL){
		return ;
	}else if(aux!=NULL){
		cout << aux->dato<<" ";
		mostrarPila(aux->siguiente);
	}
}
void quitarPila(Nodo *&pila,int &n){

		
	if(pila->dato != n){
		Nodo *aux = pila;
		pila= aux->siguiente;
		delete aux;	
		quitarPila(pila,n);
			
	}else if(pila->dato = n){
		Nodo *aux = pila;
		n = aux->dato;
		pila= aux->siguiente;
		delete aux;			
		cout << "\nSe eliminaron todos los elementos de la pila hasta el elemento "<<n<<endl;
		return;		
	}

		
}

void menuQuitarPila(Nodo *&pila){
	int n;
	cout << "\nQue elemento eliminara?\n";
	cin >> n;
	quitarPila(pila,n);
	mostrarPila(pila);
}
int main(){
	Nodo *pila= NULL;
	SetConsoleOutputCP(CP_UTF8);
	agregardatos(pila);
	cout << "\n\n📌 MUESTRA DE ELEMENTOS DE LA PILA  📌\n";
	mostrarPila(pila);
	menuQuitarPila(pila);
	return 0;
}