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
int main()
{
	char palabra[100];
    int i, j, pali=1;
    printf("\nIntroduce una cadena: \n");
    scanf("%s",palabra);
    j=strlen(palabra)-1;
    for(i=0; i<strlen(palabra)/2; i++, j--) {
        if (*(palabra+i)!=*(palabra+j)) {
            pali = 0;
            break;
        }
    }
    if (pali){
	
        printf("\nEs un palindrimo\n");
    }    
		
		
    else{
	
        printf("\nNo es un palindrimo\n");
    }
		/*********************************************ACTIVIDAD 2**********************************/
	char letras[10]={ };
	int aa=0,bb=0,cc=0,dd=0,ee=0,ff=0,gg=0,hh=0,ii=0,jj=0,kk=0,ll=0,mm=0,nn=0,oo=0,pp=0,qq=0,rr=0,ss=0,tt=0,uu=0,vv=0,ww=0,xx=0,yy=0,zz=0;
	i=0;
	
	printf("\nIngrese entre 1 a 10 caracteres\n");
	printf("\nACTIVIDAD 2\n");
	scanf("%s",letras);
	for(i=0;i<10;i++){
		switch(letras[i]){
			case 'a': aa++; break;
			case 'b': bb++; break;
			case 'c': cc++; break;
			case 'd': dd++; break;
			case 'e': ee++; break;
			case 'f': ff++; break;
			case 'g': gg++; break;
			case 'h': hh++; break;
			case 'i': ii++; break;
			case 'j': jj++; break;
			case 'k': kk++; break;
			case 'l': ll++; break;
			case 'm': mm++; break;
			case 'n': nn++; break;
			case 'o': oo++; break;
			case 'p': pp++; break;
			case 'q': qq++; break;
			case 'r': rr++; break;
			case 's': ss++; break;
			case 't': tt++; break;
			case 'u': uu++; break;
			case 'v': vv++; break;
			case 'w': ww++; break;
			case 'x': xx++; break;
			case 'y': yy++; break;
			case 'z': zz++; break;
			default: break;
		}
	}
if(aa>0){
	printf("\nA: %d",aa);
}
if(bb>0){
	printf("\nB: %d",bb);
}
if(cc>0){
	printf("\nC: %d",cc);
}
if(dd>0){
	printf("\nD: %d",dd);
}
if(ee>0){
	printf("\nE: %d",ee);
}
if(ff>0){
	printf("\nF: %d",ff);
}
if(gg>0){
	printf("\nG: %d",gg);
}
if(hh>0){
	printf("\nH: %d",hh);
}
if(ii>0){
	printf("\nI: %d",ii);
}
if(jj>0){
	printf("\nJ: %d",jj);
}
if(kk>0){
	printf("\nK: %d",kk);
}
if(ll>0){
	printf("\nL: %d",ll);
}
if(mm>0){
	printf("\nM: %d",mm);
}
if(nn>0){
	printf("\nN: %d",nn);
}
if(oo>0){
	printf("\nO: %d",oo);
}
if(pp>0){
	printf("\nP: %d",pp);
}
if(qq>0){
	printf("\nQ: %d",qq);
}
if(rr>0){
	printf("\nR: %d",rr);
}
if(ss>0){
	printf("\nS: %d",ss);
}
if(tt>0){
	printf("\nT: %d",tt);
}
if(uu>0){
	printf("\nU: %d",uu);
}
if(vv>0){
	printf("\nV: %d",vv);
}
if(ww>0){
	printf("\nW: %d",ww);
}
if(xx>0){
	printf("\nX: %d",xx);
}
if(yy>0){
	printf("\nY: %d",yy);
}
if(zz>0){
	printf("\nZ: %d",zz);
}

	
	
	getch();
	return 0;
}




	
	



