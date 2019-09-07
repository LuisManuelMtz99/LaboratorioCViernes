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
	float nota=0;
	int cve=0, x=0; 
	printf("\nIngrese la nota de la materia del estudiante\n");
	scanf("%f",&nota);
	if(nota>=5&&nota<=10){
		printf("\nAPTO\n");
		}
		if(nota>=0&&nota<5){
			printf("\nNo Apto\n");
		}
		if(nota<0||nota>10){
			printf("\nERROR\n");
		}
		
		
	
	
	
	/*********************************************************************************************/
	printf("\nActividad 2\n");
	printf("\nIngrese un numero del 1 al 7\n");
	scanf("%d",&x);
	switch(x){
		case 1: (x=1);
		printf("\nEl dia es Lunes\n");
		break;
		case 2: (x=2);
		printf("\nEl dia es Martes\n");
		break;
		case 3: (x=3);
		printf("\nEl dia es Miercoles\n");
		break;
		case 4: (x=4);
		printf("\nEl dia es Jueves\n");
		break;
		case 5: (x=5);
		printf("\nEl dia es Viernes\n");
		break;
		case 6: (x=6);
		printf("\nEl dia es Sabado\n");
		break;
		case 7: (x=7);
		printf("\nEl dia es Domingo\n");
		break;
		default: printf("\nNumero no esta en el rango de 1-7\n");
		printf("\nEl dia es Martes\n");		
	}
	
	/*********************************************************************************************/
	
	printf("\nACTIVIDAD EXTRA\n");
	printf("\nMenu de Restaurant\n");
	printf("\nElija uno de los siguientes platillos\n");
	printf("\nPizza= 1\n");
	printf("\nHamburguesa= 2\n");
	printf("\nPizzaDog= 3\n");
	printf("\nSushi= 4\n");
	printf("\nTacos= 5\n");
	scanf("%d",&cve);
	switch(cve){
		case 1: (cve=1);
		printf("\nUstes escogio pizza\n");
		break;
		case 2: (cve=2);
		printf("\nUstes escogio Hamburguesa\n");
		break;
		case 3: (cve=3);
		printf("\nUstes escogio PizzaDog\n");
		break;
		case 4: (cve=4);
		printf("\nUstes escogio Sushi\n");
		break;
		case 5: (cve=5);
		printf("\nUstes escogio Tacos\n");
		break;
		default: printf("\El numero no esta en el rango de 1-5\n");
	}
	
	
	return 0;
}
