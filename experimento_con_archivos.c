#include <stdio.h>

void crearArchivo(FILE *nombreArchivo){
	nombreArchivo = fopen("archivoSecuencial.txt","w");
	char secuencia[10];
	scanf("%s",&secuencia);
	fprintf(nombreArchivo,"%s",secuencia);
	
	fclose(nombreArchivo);
}


int main(){
    FILE *nombreArchivo;
   // nombreArchivo = fopen("archivoSecuencial.txt","w");
	crearArchivo(nombreArchivo);
	char secuencia;
	nombreArchivo = fopen("archivoSecuencial.txt","r");
	while((secuencia = fgetc(nombreArchivo)) != EOF){
		printf("%c",secuencia);
	}

	
	
    fclose(nombreArchivo);
    
    
    
    return 0;
}
