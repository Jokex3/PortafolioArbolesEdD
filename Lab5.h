#include "archivo_de_estructura.h"


Arbol *crearArbol(){
	Arbol *auxArbol = malloc(sizeof(struct nodo));
	auxArbol->hder = NULL;
	auxArbol->hizq = NULL;
	
	return (auxArbol);
}

int esVacio(Arbol *arbol){
	if(arbol == NULL){
		return 0:
	}
	return 1;
}



Arbol *insertarElementos(Arbol *arbol, int elem){
	Arbol *nodoAux;
	if(esVacio(arbol)){
		nodoAux = crearArbol();
		nodoAux->dato = elem;
		return (nodoAux);
	}else{
		if()
		
	}

}


