//#include <stdio.h>
//#include <stdlib.h>

typedef struct nodoArbol{
    int dato;
    struct nodoArbol *hder;
    struct nodoArbol *hizq;
}Arbol;


Arbol *crearArbolVacio(){
    return NULL;
}

int esVacio(Arbol *tree){
    if(tree == NULL){
        return 1;
    }
    return 0;
}

Arbol *crearArbolConElemento(int elemento){
    Arbol *auxArbol = (Arbol*)malloc(sizeof(struct nodoArbol));
    auxArbol->hder = NULL;
    auxArbol->hizq = NULL;
    auxArbol->dato = elemento;

    return(auxArbol);
}


Arbol *insertar(Arbol *tree,int elemento){
    Arbol *auxArbol; 
    if(esVacio(tree)){
        printf("\nhola2");
        auxArbol = crearArbolConElemento(elemento);
        printf("\n%i",auxArbol->dato);
        return (auxArbol);
    }else{
        printf("\nhola3");
        if(tree->dato > elemento){
            tree->hizq = insertar(tree->hizq,elemento);
        }else{
            printf("\nhola4");
            tree->hder = insertar(tree->hder,elemento);
        }
    }
    return (tree);
}
