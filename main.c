#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*run this program using the console pauser or add your own getch, system("pause") or input loop 
Autor:Luis Manuel Lopez Martinez
Fecha:06/09/2019
Grupo: 006
Horario: 7:00am - 9:00 am
Matricula: 1986172
*/

int fc(int *);
	
int vocal( char *);
int main(){
	static char v[100];
	printf("\nACTIVIDAD 1\n");
	fflush(stdin);
	printf("Ingrese la cadena: ");
	gets(v);	
	printf("El numero de vocales que tiene la cadena es: %d\n", vocal(v));
		int A[2]={};
		/***********************************ACTIVIDAD 2****************************************/
	printf("\nACTIVIDAD 2\n");
	printf("Dame el 1 digito: ");
	scanf("%d",&A[1]);
	printf("Dame el 2 digito: ");
	scanf("%d",&A[2]);
	
	printf("\nLa suma de %d y de %d es: %d",A[1],A[2],fc(A));
	getch();
	return 0;
 }

int vocal( char *v){
	int c=0;
	while(*v)
	{
		
	switch(toupper(*v)){
		case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U': 
	   c++;
	    
     }
     v++;
  }
  return c;
}

  
  int fc(int *A){
  	int i,s=0, b, *c;
  	for(i=1;i<=2;i++){
  			s=s+A[i];
	  }
	  c=&s;
	b=*c;
	  return b;
  }		
