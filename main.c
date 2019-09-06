#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
Autor:Luis Manuel Lopez Martinez




*/

int main(int argc, char *argv[]) {
	float nota=0;
	int cve=0, x=0; 
	printf("\nIngrese la nota de la materia del estudiante\n");
	scanf("%f",&nota);
	if(nota>=5|nota<=10){
		printf("\nAPTO\n");
		}
		else{
			(nota>=0|nota<5);
			printf("\nNo Apto\n");
		}
		if(nota<0|nota>10){
			printf("ERROR");
		}
		
		
	
	
	
	/*********************************************************************************************/
	printf("\nActividad 2\n");
	printf("\nIngrese un numero del 1 al 7\n");
	scanf("%d",&x);
	if(x=1){
		printf("\nEl dia es Lunes\n");
	}
	else{
		(x=2);
		printf("\nEl dia es Martes\n");
	}
	if(x=3){
		printf("\nEl dia es Miercoles\n");
	}
	else{
		(x=4);
		printf("\nEl dia es Jueves\n");
	}
	if(x=5){
	printf("\nEl dia es Viernes\n");
}
	else{
	 (x=6);
	 printf("\nEl dia es sabado\n");
	}
	if(x=7){
		printf("\nEl dia es Domingo\n");
	}
	else{
		(x<1|x>7);
		printf("\nERROR\n");
	}
	
	
	
	return 0;
}
