#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalif,*calif, *nota, *punto;
int main(){
	
	pedirNotas();
	mostrarNotas();
	delete[]calif;
	delete[]nota;
	delete[]punto;
	
	getch();
	return 0;
}

void pedirNotas(){
	
	cout<<"Digite el numero de calificaciones:";
	cin>>numCalif;
	
	calif = new int[numCalif];
	
	for(int i=0; i<numCalif; i++)
	{
		cout<<"\nIngrese una c:";
		cin>>calif[i];
		cout<<"\nIngrese una n:";
		cin>>nota[i];
		cout<<"\nIngrese una p:";
		
	}
}

void mostrarNotas(){
	cout<<"\n\nMostrando notas del usuario:\n";
	for(int i=0;i<numCalif;i++){
	 cout<<calif[i]<<endl;
	 cout<<nota[i]<<endl;
	 cout<<punto[i]<<endl;
	}
}