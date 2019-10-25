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



void primo(int num);
long int potencia (int base, int exponente);


int main(){
	int numero, fal=1;
	printf("\nActiviad 1\n");
	while(fal==1){
		printf("Ingrese un numero: \n");
		scanf("%d",&numero);
		while(numero<0){
			printf("Valor invalido vuelva a ingresar otro digito: ");
			scanf("%d",&numero);
		}
		primo(numero);
		printf("\nDesea continuar ingrese 1 si no ingrese 0 ");
		scanf("%d",&fal);
	
}
	int base, exponente;
	printf("\nACTIVIDAD 2\n");	
	printf("La Base es: ");
	scanf("%d", &base);
	 while (base<0){
	printf("El valor debe ser mayor que cero vuelva a ingresar: \n");
	scanf("%d", &base);
	 }
	printf("El Exponente es: ");
	scanf("%d", &exponente);
	printf("\n%d elevado a %d es %ld\n", base, exponente, potencia(base,exponente));
	getch();
	return 0;
	}

   void primo (int numero)
  {
    int i,k=0;
    for(i=1;i<numero+1;i++)
    if(numero%i==0)
	{
    		k=k+1;
	}
	if(k==2)
	{
		printf("El numero %d es primo",numero);
	}
      else
	  {
      	printf("El numero %d no es primo",numero);
	  }
  }

  

  long int potencia (int base, int exponente) {
	long int sum=0, i,x;
	sum=pow(base,exponente);
    
                                                                         
	return (sum);
 }
  
  
	



