#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop 
Autor:Luis Manuel Lopez Martinez
Fecha:06/09/2019
Grupo: 006
Horario: 7:00am - 9:00 am
Matricula: 1986172
*/


struct estudiante{
	char nombre[40];
	char sexo[20];
	int edad;
	float cal[4];
};

struct pandas{
	char nombre[100];
	float peso;
	int anio;
	char sexo[100];
};

void leerpanda();
int Edadpanda(int p);
int Tenerbebes(int p);
int a;

int main(){
	int x;
	char y[60];
	float p1,may=0;
	printf("\nACTIVIDAD 1\n");
	do{
	struct estudiante a1;
	printf("Nombre: ");
	scanf("%s",a1.nombre);
	printf("Sexo: ");
	scanf("%s",a1.sexo);
	printf("Edad: ");
	scanf("%d",&a1.edad);
	printf("Califcacion 1: ");
	scanf("%f",&a1.cal[0]);
	printf("Califcacion 2: ");
	scanf("%f",&a1.cal[1]);
	printf("Califcacion 3: ");
	scanf("%f",&a1.cal[2]);
	printf("Califcacion 4: ");
	scanf("%f",&a1.cal[3]);
	printf("Califcacion 5: ");
	scanf("%f",&a1.cal[4]);
	p1=a1.cal[0]+a1.cal[1]+a1.cal[2]+a1.cal[3]+a1.cal[4];
	p1=p1/5;
	printf("El promedio de %s es de %.2f\n",a1.nombre,p1);
	printf("\nIngrese 1 si desea continuar de lo contrario ingrese 0: \n");
	scanf("%d",&x);
	if(p1>may){
		may=p1;
	}
	}while(x==1);
	printf("\nEl estudiante con el mayor promedio es de: %.2f",may);
	
	
	/******************************************************ACTIVIDAD 2*********************************/
	int xx,p,puede,n1,bebe;
	printf("\nACTIVIDAD 2\n");
	leerpanda();
	xx=Edadpanda(p);
	printf("La edad del panda es: %d",x);
	bebe=Tenerbebes(n1);
	printf("%d",bebe);
	getch();
	return 0;
	getch();
	return 0;
}


void leerpanda(){
	struct pandas a2;
	printf("El panda se llama: ");
	scanf("%s",a2.nombre);
	printf("El peso es de: ");
	scanf("%f",&a2.peso);
	printf("El anio de nacimiento es: ");
	scanf("%d",&a2.anio);
	a=a2.anio;
	printf("Sexo: ");
	scanf("%s",a2.sexo);
	

}

int Edadpanda(p){
	struct pandas a2;
	int edadp;
	edadp=2019-a;
	return(edadp);
}

int Tenerbebes(int p){
	int res, edad,s;
	edad=Edadpanda(p);
	printf("\nIngrese 0 si el panda introducido fue un macho o ingrese 1 si fue una hembra ");
	scanf("%d",&s);
	if(edad>=5&&(s==1)){
		res=1;

	}
	else{
		res=0;

	}
	return(res);
}

	



