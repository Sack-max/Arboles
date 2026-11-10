#include <iostream>

using namespace std;

// Estructura del nodo del árbol
struct Nodo {
    int dato;
    Nodo* izquierdo;
    Nodo* derecho;
};

// Función para crear un nuevo nodo
Nodo* crearNodo(int n) {
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->izquierdo = nullptr;
    nuevo_nodo->derecho = nullptr;
    return nuevo_nodo;
}

// Función para insertar nodos en el arbol binario 
void insertarDerecho(Nodo* padre, int n) {
    padre->derecho = crearNodo(n);
}
void insertarIzquierdo(Nodo* padre, int n) {
    padre->izquierdo = crearNodo(n);
}

// Recorrido Preorden: Raíz -> Izquierdo -> Derecho
void preOrden(Nodo* arbol) {
    if (arbol == nullptr) {
        return;
    } else {
        cout << arbol->dato << " ";
        preOrden(arbol->izquierdo);
        preOrden(arbol->derecho);
    }
}

// Recorrido Inorden: Izquierdo -> Raíz -> Derecho
void inOrden(Nodo* arbol) {
    if (arbol == nullptr) {
        return;
    } else {
        inOrden(arbol->izquierdo);
        cout << arbol->dato << " ";
        inOrden(arbol->derecho);
    }
}

// Recorrido Postorden: Izquierdo -> Derecho -> Raíz
void postOrden(Nodo* arbol) {
    if (arbol == nullptr) {
        return;
    } else {
        postOrden(arbol->izquierdo);
        postOrden(arbol->derecho);
        cout << arbol->dato << " ";
    }
}

int main() {
    Nodo* arbol = nullptr;

    // Crear el árbol binario


arbol = crearNodo(20);
// Hijos de la raíz
insertarIzquierdo(arbol, 50);
insertarDerecho(arbol, 10);
// Hijos del nodo 50
insertarIzquierdo(arbol->izquierdo, 80);
insertarDerecho(arbol->izquierdo, 100);

// Hijos del nodo 10
insertarIzquierdo(arbol->derecho, 5);
insertarDerecho(arbol->derecho, 70);







    cout << "\nRecorrido Preorden: ";
    preOrden(arbol);

    cout << "\nRecorrido Inorden: ";
    inOrden(arbol);

    cout << "\nRecorrido Postorden: ";
    postOrden(arbol);
    cout << endl;

    return 0;
}