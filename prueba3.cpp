#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void mostrarDatos();


typedef struct{
	
	char fabricante[20];
//	int semestre;
	
}proce_S;
typedef struct {
	char nombre[20];
	int tamano;
	proce_S proce;	
}Microos_S;



int main(){
	
	pedirDatos();
	mostrarDatos();
	delete[]n;
	
	getch();
	return 0;
}

void pedirDatos(){
	
	int n,i;											//DECLARACION DE VARIABLE ENTERO (STACK)
	cout<<" Dame el numero de microos: "<<endl;
	
	cin>>n;
		Microos_S microos[n];
    

	int *c=new int[n];						// RESERVA UN BLOQUE DE MEMORIA DE TAMANO (n VECES int)
	if (c==NULL) exit(0); 
	for(i=0;i<n;i++)
	{							
		printf("\nDame el nombre del microocontrolador: #%d",i+1);
		fflush(stdin);
		scanf("%s",&microos[i].nombre);
		
		do{  
		printf("\nDame el tamano de la arquitectura:");
		fflush(stdin);
		scanf("%d",&microos[i].tamano);
		}while(microos[i].tamano!=8&&microos[i].tamano!=16&&microos[i].tamano!=32);
		printf("\nDame el nombre de fabricante:"); 
		fflush(stdin); 
		scanf("%s",&microos[i].proce.fabricante);	
	}
	
}

void mostrarDatos(){
	
}