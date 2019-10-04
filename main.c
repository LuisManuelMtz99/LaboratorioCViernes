#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
Autor:Luis Manuel Lopez Martinez
Fecha:06/09/2019
Grupo: 006
Horario: 7:00am - 9:00 am
Matricula: 1986172




*/
int main()
{
	int veoe[6][10][2];
	int j,k,l,a,b;
	b=10;
	printf("\nACTIVIDAD 1\n");
	for(j=0;j<6;j++){
	
	
	for(k=0;k<10;k++){
	
	
	for(l=0;l<2;l++){
		veoe[j][k][l]=b;
	
		}
	 }
	}
	printf("\nEl empleado numero 3 de la oficina numero 7 del edificio numero 2 ha vendido: %d\n",veoe[3][7][1]);
	a=veoe[3][7][1]=4234;
	printf("\nCambiando el valor de la posicion 3,7,1 del arreglo\n");
	printf("\nEl empleado numero 3 de la oficina numero 7 del edificio numero 2 ha vendido: %d\n",a);
		


/*********************************************ACTIVIDAD 2**********************************/
	printf("\nACTIVIDAD 2\n");
	int x;
	x=veoe[3][7][1]+10;
	printf("\nEl empleado numero 3 de la oficina 7 del edificio numero 2 ha vendido: %d\n",x);
	printf("\nPosicion inexistente del arreglo es: %d",veoe[12][13][22]);
	getch();
	return 0;
		
}

	
	



