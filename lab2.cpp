#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct{
	
	char fabricante[20];

	
}proce_S;
typedef struct {
	char nombre[20];
	int tamano;
	proce_S proce;	
}Microos_S;

int main(){
	
	printf("\n-----------------------------------------------------------------------------------");
	printf("\n Materia: Arquitectura de Prog. Para Hardware AD22");
	printf("\n Alumno: Kevin Alejandro Rivera Ramirez");
	printf("\n Trabajo: Laboratorio 1.- Estructuras de Datos");
	printf("\n Fecha: 21/02/2023");  
	printf("\n-----------------------------------------------------------------------------------");
	printf("\nIntrucciones");
	printf("\n Tienes que ingresar, numero de microcontroladores a clasificar,");
	printf("\n nombre, fabricante y arquitectura.");
	printf("\n te entregara los datos de forma ordenada (segun su arquitectura 8, 16 o 32 bits).");
	printf("\n-----------------------------------------------------------------------------------");
	int n,i, z;											
	
	/*Arreglo dinamico*/
	
	cout<<" \nDame el numero de microos: "<<endl;
	
	cin>>n;
		Microos_S microos[n];
    

	int *c=new int[n];						
	if (c==NULL) exit(0); 
	for(i=0;i<n;i++)
	{						
		/*Pedimos datos*/
		
		printf("\nDame el nombre del microocontrolador: #%d",i+1);
		fflush(stdin);
		scanf("%s",&microos[i].nombre);
		
		do{  
		printf("\nDame el tamano de la arquitectura:");
		//printf("\nRecuerda poner solo arquitectura de 8, 16 y 32\n");
		fflush(stdin);
		scanf("%d",&microos[i].tamano);
		}while(microos[i].tamano!=8&&microos[i].tamano!=16&&microos[i].tamano!=32);
		printf("\nDame el nombre de fabricante:"); 
		fflush(stdin); 
		scanf("%s",&microos[i].proce.fabricante);	
		printf("\n----------------------------------------------------------");
	}
	printf("\n--------------Datos obtenidos----------------");
	/*Imprimimos datos*/
	for(z=32;z>=8;z=z/2) 
	{
		for(i=0;i<n;i++)
	    {
			if(microos[i].tamano==z)
		     {
		 		printf("\n Nombre del microocontrolador: (%d): %s",i+1,microos[i].nombre);
				printf("\n Arquitectura: %d",microos[i].tamano);
				printf("\n Fabricante: %s",microos[i].proce.fabricante);
				printf("\n-----------------------------------------------");
	        }
	        	
	    }
	    
	   
	}
	delete []c; 
	return 0;
}
	
	
	
