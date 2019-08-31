#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int p=0, i=0;
	printf("Programa que imprimira el numero mas grande");
	printf("\nIngrese el primer numero: ");
	scanf("%d",&p);
	printf("\nIngrese el segundo numero: ");
	scanf("%d",&i);
	if(p>i){
		printf("\nEl numero mayor es: %d",p);
	}
	else{
		printf("\nEl numero mayor es: %d",i);
	}
	
	
	
	/***********************
				ACTIVIDAD 2}
	*******/

    int a=5,b=3,c=-12;
	printf("Actividad 2");
	
	
	printf("\na tiene un valor de 5\n");
	printf("\nb tiene un valor de 3\n");
	printf("\nc tiene un valor de -12\n");
	printf("\n a es mayor a 3\n");
	if(a>3) {
	
	printf("\na si es mayor a 3");
	
	}
	else {
	printf("\na no es mayor a 3");
	}
	printf("\na>c");
	if(a>c){
		printf("\na si es mayor a c");
		
	}
	else {
		printf("\na no es mayor a c");
	}
	printf("\nb!=c");
	if(b!=c) {
		printf("\nb es diferente de c");
	}
	else {
		printf("\nb no es diferente de C");
	}
	printf("\na es igual a 3");
	if(a==3){
		printf("\na si es igual a 3");
		
	}
	else {
		printf("\na no es igual a 3");
		
	}
	printf("\na*b es igual 15");
	if(a*b==15) {
		printf("\nLa multiplicacion de a por b si es =15");
		
	}
	else {
		printf("\nLa multiplicacion de a*b no es igual a 15");
	}
	printf("\nc entre b es menor a a");
	if(c/b<a) {
		printf("\nLa division de c entre b es menor que a");
	}
	else {
		printf("\nLa division de c/b no es menor a a");
	}
	printf("\nc entre b es igual a menos 10\n");
	if(c/b==-10) {
		printf("\nLa division de c entre b es =-10");
	}
	else {
		printf("\nLa division de c entre b no es igual a -10");
	}
	printf("\na + b +c es igual a 5");
	if(a+b+c==5) {
		printf("\nLa suma de a+b+c si es igual a 5");
	}
	else {
		printf("\nLa suma de a+b+c no es igual a 5");
	}
	int variable1=0,variable2=0;
	variable1=a+b;
	variable2=a-b;
	printf("\na+b es igual a 8 y a-b es igual a 2");
	if(variable1==8 && variable2==2) {
		printf("\nLa suma de a+b=8 y el resultado de a-b=2");
	}
	else{
		printf("\nLa suma de a+b no es 8 o la resta de a-b no es 2\n");
	}
	printf("\na+b=8 o b-a=6");
	if(variable1==8||variable2==6){
		printf("\nLa suma de a+b=8 o el resultado de a-b es igual a 6");
	}
	else{
	printf("\nLa suma a+b no es 8 y la resta de b-a no es 6\n ");
	}
	printf("\na mayor a 3, b mayor a 3, y c menor a 3");
	if(a>3 && b>3 && c<3) {
		printf("\na es mayor a 3, b es mayor a >3 y c es menor a3");
	}
	else { 
	printf("\na no es mayor 3, b no es mayor 3 o c no es menor a 3");
	}
	
	
		/*************Actividad Extra************
		*****************************/
		
	a=0;
	b=0;
	c=0;
	variable1=0;
	variable2=0;
	printf("\nActividad Extra\n");
	
  	printf("\nIngrese el valor de a: ");
  	scanf("%d",&a);
  	printf("\nIngrese el valor de b: ");
  	scanf("%d",&b);
  	printf("\nIngrese el valor de c: ");
  	scanf("%d",&c);

	printf("\nSi a es mayor3");
	if(a>3) {
	
	printf("\na es mayor a 3");
	
	}
	else {
	printf("\na no es mayor a 3");
	}
	printf("\na>C");
	if(a>c){
		printf("\na es mayor a c");
		
	}
	else {
		printf("\na no es mayor a c");
	}
	printf("\nb!=c");
	if(b!=c) {
		printf("\nb es diferente de c");
	}
	else {
		printf("\nb es igual a c");
	}
	printf("\na=3");
	if(a==3){
		printf("\na es igual a 3");
		
	}
	else {
		printf("\na no es igual a 3");
		
	}
	printf("\na*b=15");
	if(a*b==15) {
		printf("\nEl producto de a*b=15");
		
	}
	else {
		printf("\na*b no es igual a 15");
	}
	printf("\n(c/b)<a");
	if(c/b<a) {
		printf("\nLa division de c/b es menor que a");
	}
	else {
		printf("\nLa division de c/b no es menor que a ");
	}
	printf("\nc/b=-10");
	if(c/b==-10) {
		printf("\nLa division de c/b=-10");
	}
	else {
		printf("\nLa division de c/b no es igual a -10");
	}
	printf("\na+b+c=5");
	if(a+b+c==5) {
		printf("\nLa suma de a+b+c=5");
	}
	else {
		printf("\nLa suma de a+b+c no es igual a 5");
	}
	variable1=a+b;
	variable2=a-b;
	printf("\na+b=8 y a-b=2");
	
	if(variable1==8 && variable2==2) {
		printf("\nLa suma de a y b es 8 y tambie la resta de a-b es 2");
	}
	else{
		printf("\nLa suma de a y b no es 8 ni la resta de a -b es 2");
	}
	printf("\na+b=8 o b-a=6");
	if(variable1==8||variable2==6){
		printf("\nLa suma de a+b=8 o la resta de a-b es igual a 6\n");
	}
	else{
		printf("\nLa suma no es igual a 8 ni la resta es igual a 6");
	}
	printf("\na>3 y b>3 y c<3");
	if(a>3 && b>3 && c<3) {
		printf("\na>3, b>3 y c<3");
	}
	else { 
	printf("\na no es mayor a 3 o b no es mayor a 3 o c no es menor a 3\n");
	}
		
	
	
	
	return 0;
}
