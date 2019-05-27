#include <stdio.h>
#include <stdlib.h>

//#include "archivo_de_estructura.h"
#include "Lab4.h"

/*Por tema no entender correctamente el IDE, creo un modulo para crear el archivo en donde esta el programa para que funcione 
sin problemas,se puede eliminar si no presenta el mismo error*/
void crearArchivo(FILE *nombreArchivo){
	nombreArchivo = fopen("archivoSecuencial.txt","w"); //Se crea un archivo con respectivo nombre
	char secuencia[100]; 
	scanf("%s",&secuencia); //Usuario escribe la secuencia
	fprintf(nombreArchivo,"%s",secuencia); //Secuencia se introduce al archivo creado
	
	fclose(nombreArchivo);
}

int main(){
    FILE *archivoCodigo; //Variable tipo archivo que se utilizara
    crearArchivo(archivoCodigo);//Modulo para crear el archivo, opcional
    //char secuencia[100]; /*Eliminados por no utilidad*/
    archivoCodigo = fopen("archivoSecuencial.txt","r");
    //fscanf(archivoCodigo,"%s",secuencia);
    //printf("%s\n",secuencia);
    Arbol *arbolPrincipal = creaArbolArchivo("archivoSecuencial.txt");

    fclose(archivoCodigo);
    printf("\nHOLA");
    printf("\n%i\n",arbolPrincipal->dato);



    return 0;
}
