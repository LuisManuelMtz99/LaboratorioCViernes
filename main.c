#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*run this program using the console pauser or add your own getch, system("pause") or input loop 
Autor:Luis Manuel Lopez Martinez
Fecha:06/09/2019
Grupo: 006
Horario: 7:00am - 9:00 am
Matricula: 1986172
*/

int main(){
 	/*****************************************ACTIVIAD 1 **********************************/
 	FILE * flujo=fopen("Hola.txt","w");
 	if (flujo==NULL){
 		perror("Error en la apertura del archivo");
 		return 1;
	 }
	 printf("\nCambiando la cadena por PROCESADO");
	 fputs("\nPROCESADO",flujo);
	 fflush(flujo);
	 fclose(flujo);
	 printf("\nTrabajo Realizado");
	
	FILE* flujo1=fopen("Archivo_alreves","w+");
		if (flujo1==NULL){
 		perror("Error en la apertura del archivo");
 		return 1;
 	}
 	printf("\nINVIRITIENDO LA CADENA");
 	fputs("\nODNUM ALOH",flujo1);
 	fflush(flujo1);
 	fclose(flujo1);
	printf("\nArchivo 'Archivo_alreves' Creado Exitosamente");
	
	 
	 
	/***************************************ACTIVIDAD 2**************************************/
FILE * flujo2=fopen("NUME.txt","r");
int numero,numero2;
 fscanf(flujo2,"a: %d y b: %d ",numero,numero2);
 fclose(flujo2);
	 printf("Los numeros son: %d %d",numero,numero2);
	 printf("\nCreando un archivo de la suma de a y b");
	 FILE *flujo3=fopen("suma.txt","w");
	 fprintf(flujo3,"La suma es: %d",numero+numero2);
	 printf("\nARCHIVO suma CREADO");
	 fclose(flujo3);
getch();
return 0;
}
