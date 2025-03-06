#include <iostream>

using namespace std;

//estructura
struct Nodo{
	int dato;
	Nodo *siguiente;	
};


//prototipos
void insertarCola(Nodo *&, Nodo *&, int );
bool vacio(Nodo *);


//funcion principal
int main(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int dato;
	cout << "Digite un dato a agregar a la cola:\n"; cin >>dato;
	insertarCola(frente,fin,dato);
	
	return 0;
}

//funciones
void insertarCola(Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato = n;
	nuevoNodo->siguiente = NULL;
	if(vacio(frente)){
		frente = nuevoNodo;
	}else{
		fin->siguiente = nuevoNodo;
	}
	fin = nuevoNodo;
	
	cout << "se agrego el dato: "<<n<<endl;	
}

bool vacio(Nodo *frente){
	return (frente == NULL)? true : false;
}





