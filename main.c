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

	int x=0, z=0, w=0;
	do
	{
		printf("\nIngrese un numero entero\n");
		scanf("%d",&x);
		printf("\nDesea continuar? ingrese 1 si desea y 2 si no lo desea\n");
        scanf("%d",&z);
		w=w+x;
    }while (z==1);
	printf("\nLa suma de los introducidos es %d \n",w);
	
	
	/***************************ACVTIVIDAD 2**************/

int a=0;
printf("\nActivad 2\n");
printf("\nDo While\n");
do{
	printf("\nIngrese un numero\n");
	scanf("%d",&a);
	if(a<=100){
	printf("\nEl numero introducido es: %d\n",a);
	}
}while (a<100);

/************************Actividad Extra**********/
int b=0;
printf("\nWhile\n");
while (b<=100){
	printf("\nIngrese un numero\n");
	scanf("%d",&b);
	if(b<=100){
	printf("\nEl numero introducido es: %d\n",b);
	}
}
getch();
return 0;
}


