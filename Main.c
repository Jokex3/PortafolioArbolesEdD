#include <stdio.h>
#include <stdlib.h>

#include "Arbol.h"

void imprimir(Arbol *tree){
    if(tree != NULL){
        printf("%i-",tree->dato);
        imprimir(tree->hizq);
        imprimir(tree->hder);
    }
}

int main(){
    Arbol *raizPrincipal = crearArbolVacio();
    raizPrincipal = insertar(raizPrincipal,10);
    raizPrincipal = insertar(raizPrincipal,11);
raizPrincipal = insertar(raizPrincipal,15);
raizPrincipal = insertar(raizPrincipal,1);
    printf("\n\n[%i]\n\n",raizPrincipal->dato);
    imprimir(raizPrincipal);

    return 0;
}