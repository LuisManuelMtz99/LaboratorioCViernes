#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
Autor:Luis Manuel Lopez Martinez
Fecha:06/09/2019
Grupo: 006
Horario: 7:00am - 9:00 am
Matricula: 1986172




*/

int main(int argc, char *argv[]) {
			/*****************ACTIVIDAD 1***********************/

int numeroDeCoches[24]={15,2,56,53,44,26,87,96,2,4,3,9,6,7,8,10,76,18,19,20,24,23,25,27}, r, i;
printf("ACTIVIDAD1\n");
printf("\nnumeroDeCoches\n");
r=2;
numeroDeCoches[r]=57;
printf("\nLa hora %d \n", r);
printf("\nEl numero de coches en la hora %d fue de %d coches\n", r, numeroDeCoches[r]);
r=21;
numeroDeCoches[r]=57;
printf("\nLa hora %d\n", r);
printf("\nEl numero de coches en la hora %d fue de %d coches\n", r, numeroDeCoches[r]);

/*****************************************ACTIVIDAD 2**************************************/
int A=8, B=4,z;
r=0;
printf("\nActividad 2\n");
printf("\nEl valor de A es 8 y el valor de B es 4\n");
r=A/B;
printf("\nDeterminacion de la posicion de la division A/B\n");
z=numeroDeCoches[A/B];
printf("\nLa posicion de A/B es: %d\n",z);




	
	
getch();
return 0;
}

	
	



