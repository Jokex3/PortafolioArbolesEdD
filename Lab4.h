#include "archivo_de_estructura.h"

Arbol *creaArbolArchivo(char *);
Arbol *crearArbolConSecuencia(FILE *);
Arbol *crearNodo(int );

Arbol *creaArbolArchivo(char *archivoSecuencia){ //Modulo principal que solicita el laboratorio 4 con su parametro
    Arbol *arbolAux = NULL; //Iniciamos un arbol nulo para agregarle contenido.
    FILE *archivo = fopen(archivoSecuencia,"r"); //Abrimos el archivo en modo de lectura
    arbolAux = crearArbolConSecuencia(archivo); //El arbol se asigna el valor que se devuelve el modulo con el parametro de archivo que esta en modo de lectura

    fclose(archivo); //Ya acabado el proceso se cierra
    return (arbolAux);
}


Arbol *crearArbolConSecuencia(FILE *archivoAbierto){
    if(feof(archivoAbierto)){
        return NULL; /*ARCHIVO NO EXISTE*/
    }
    char datoExtraido = fgetc(archivoAbierto); //Se extrae caracter por caracter del archivo
    if(datoExtraido == 'N'){
        return NULL; /*Retorna un Null, para indicar la rama no tenga hoja*/
    }
    int datoEnteroExtraido = datoExtraido - '0'; //Convertimos el numero caracter en un entero 
    Arbol *arbolAux = crearNodo(datoEnteroExtraido); //Se crea un arbol dando el dato extraido
    arbolAux->hizq = crearArbolConSecuencia(archivoAbierto);//Recursividad: Al salir un N para nulo, el anterior dato se engancha siendo hizq del nodo con el valor anterior a este
    arbolAux->hder = crearArbolConSecuencia(archivoAbierto);//Lo mismo le ocurre a este

    return (arbolAux);
}

Arbol *crearNodo(int dato){ //Modulo que crea un nodo de tipo arbol solo para agregar el dato
    Arbol *auxArbol = (Arbol*)malloc(sizeof(struct nodo)); 
    auxArbol->dato = dato;
    auxArbol->hder = NULL;
    auxArbol->hizq = NULL;
    return (auxArbol);
}
