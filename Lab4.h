#include "archivo_de_estructura.h"

Arbol *creaArbolArchivo(char *);
Arbol *crearArbolConSecuencia(FILE *);
Arbol *crearNodo(int );

Arbol *creaArbolArchivo(char *archivoSecuencia){
    Arbol *arbolAux = NULL;
    FILE *archivo = fopen(archivoSecuencia,"r");
    arbolAux = crearArbolConSecuencia(archivo);

    fclose(archivo);
    return (arbolAux);
}


Arbol *crearArbolConSecuencia(FILE *archivo){
    if(feof(archivo)){
        return NULL; /*ARCHIVO NO EXISTE*/
    }
    char datoExtraido = fgetc(archivo);
    if(datoExtraido == 'N'){
        return NULL; /*Retorna un Null, para indicar la rama no tenga hoja*/
    }
    int datoEnteroExtraido = datoExtraido - '0';
    Arbol *arbolAux = crearNodo(datoEnteroExtraido);
    arbolAux->hder = crearArbolConSecuencia(archivo);
    arbolAux->hizq = crearArbolConSecuencia(archivo);

    return (arbolAux);
}

Arbol *crearNodo(int dato){
    Arbol *auxArbol = (Arbol*)malloc(sizeof(struct nodo));
    auxArbol->dato = dato;
    auxArbol->hder = NULL;
    auxArbol->hizq = NULL;
    return (auxArbol);
}