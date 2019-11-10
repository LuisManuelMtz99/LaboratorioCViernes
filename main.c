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
#define SIZE_NAME 20

struct pictures{
	char name[SIZE_NAME];
	int date_time;
	
}picture_info;

struct cordinates{
	int latitude;
	int longitude;
}places[4];

int main(){
 	/*****************************************ACTIVIAD 1 ***********************************/
 	int i;
 	struct pictures pic[2];
 	struct pictures *r;
 	r=pic;
 	for(i=0;i<2;i++){
 		fflush(stdin);
 		printf("\nIntroduce el nombre de la fotografia: ");
 		gets((r+i)->name);
 		printf("Introduce la fecha y la hora en numeros: ");
 		scanf("%d",&(r+i)->date_time);
 		
	 }
	 
	/***************************************ACTIVIDAD 2**************************************/
	struct cordinates a,*p,*q;
	int j,aux;
	int A[4];
	int B[4];
	printf("\nACTIVIDAD 2\n");
	places[0].latitude=200;
	places[0].longitude=300;
	places[1].latitude=400;
	places[1].longitude=100;
	places[2].latitude=100;
	places[2].longitude=400;
	places[3].latitude=300;
	places[3].longitude=200;
	p=places;
	printf("\nOrdenado por como fueron obtenidos\n");
	printf("\n%d %d\n%d %d\n%d %d\n%d %d\n",places[0].latitude,places[0].longitude,places[1].latitude,places[1].longitude,places[2].latitude,places[2].longitude,places[3].latitude,places[3].longitude);
	
	for(i=0;i<4;i++){
		A[i]=(p+i)->latitude;
	}
	
	for(i=1;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
		if(A[j] > A[j+1])
		{
			aux=A[j];
			A[j]=A[j+1];
			A[j+1]=aux;
		}
	}
}

printf("\nOrden creciente por latitud\n");
for(i=0;i<4;i++){
			printf("%d\n",A[i]);
	
}
printf("\nOrdenado crecientemente por Longitud\n");
for(i=0;i<4;i++){
		A[i]=(p+i)->longitude;
	}
	
	for(i=1;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
		if(A[j] > A[j+1])
		{
			aux=A[j];
			A[j]=A[j+1];
			A[j+1]=aux;
		}
	}
}
printf("\nOrden creciente por longitud\n");
for(i=0;i<4;i++){
			printf("%d\n",A[i]);
}
	
getch();
return 0;
}
