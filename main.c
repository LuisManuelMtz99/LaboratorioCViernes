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

	float cal=0, suma, prom;
	int i;
	printf("\nPRACTICA 7\n");
	printf("\nPrograma que te dice si un alumno esta aprobado o reprobado\n");
	for(i=1;i<=10;i++){
		printf("\nIngrese una calificaciones entre 0-10\n");
		printf("\nIngrese la calificaion %d ",i);
		scanf("%f",&cal);
		while(cal<0 || cal>10){
			printf("\nCalificacion Invalida, ingrese su calificacion de nuevo\n");
			scanf("%f",&cal);
		}
		suma=suma+cal;
		}
	prom=suma/10;
	printf("\nEl promedio del alumno es: %.2f \n",prom);
	if(prom>7){
		printf("\nEl alumno esta APROBADO");
		}
		else{
			printf("\nEl alumno esta REPROBADO\n");
		}
		
	
	/*****************ACTIVIDAD 2***********************/
	 int base=0, potencia=0, resultado=1;
	printf("\nActividad 2\n");
	printf("\nPrograma que calcula la potencia de un numero\n");
	printf("\nIngrese la base: \n");
	scanf("%d",&base);
	printf("\nIngrese la potencia: \n");
	scanf("%d",&potencia);
	
	for(i=0;i<potencia;i++){

		resultado=resultado*base;
		
	}
	printf("\nEl resultado es: %d ",resultado);
	
	
	
getch();
return 0;
}

	
	



