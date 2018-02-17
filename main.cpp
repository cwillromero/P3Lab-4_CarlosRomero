#include <iostream>
#include <string>
#include <vector> 
#include "Carro.h"
#include "Parqueo.h"
using namespace std;

int menu();
void liberarMatriz(int**&, int);
parqueo* newParqueo();
Carro newCarro(Carro****,int,int,int);
void verEspacios(Carro****, int, int);

int main()
{	bool Continuar=1;
	parqueo* global;
	Carro**** estacionados;
	while (Continuar){
		switch(menu()){
			case 1:{	
				global=newParqueo();
				estacionados=global->getmatriz();
				cout<<"Parqueo creado"<<endl;
				break;
				}

			case 2:{
				newCarro(global->getmatriz(), global->getn(),global->getm(),global->getaltura());
				cout<<"Auto creado"<<endl;
				break;
				}

			case 3:{
				break;
				}
			case 4:{
				verEspacios(global->getmatriz(), global->getn(), global->getm());
				break;
				}
			default:{		
				break;
				}
		}	
	cout<<"Continuar?[0-no/1-si]"<<endl;
	cin>>Continuar;
	}
	return 0;
}

Carro newCarro(Carro**** park,int  x,int y, int altura){
	int piso=0;
	int caltura;
	string marca;
	string color;
	cout<<"Ingrese el piso a estacionar: ";
	cin>>piso;
	cout<<"Ingrese la marca del Carro: ";
	cin>>marca;
	cout<<"Ingrese el Color: ";
	cin >>color;
	cout<<"Ingrese la altura: ";
	cin>>caltura;
	for (int i=0;i<x;i++){
		for (int j=0;j<y;j++){
			if (park[piso][i][j]==NULL){
				park[i][j][piso] = new Carro(marca,color,caltura);
			}
		}
	}	

}


parqueo* newParqueo(){
	int personas=-5;
	int pisos=0;
	int altura=0;
	while (personas<=50||personas>=100){
		cout<<"Ingrese la cantidad de personas"<<endl;
		cin>>personas;
	}
	cout<<"Ingrese la altura del parqueo: "<<endl;
	cin>>altura;
	cout<<"Ingrese la cantidad de pisos del parqueo: "<<endl;
	cin>>pisos;
	parqueo* park=new parqueo(personas,altura,pisos);
	return park;
}


void verEspacios(Carro**** park, int x, int y){
	int espacios=0;
	for (int i=0;i<x;i++){
		for (int j=0;j<y;j++){
			if (park[i][j]==NULL){
				espacios++;
			}
		}
	}
	cout<<"Hay "<<espacios<<" espacios disponibles"<<endl;

}

int menu(){
	int Respuesta=-100;
	while(Respuesta<=0||Respuesta>4){
		cout<<"Lab #4 "<<endl<<"Elija una opcion: : "<<endl;
		cout <<"1-Crear parqueo"<<endl<<"2-Crear Carros y agregar a parqueo"<<endl<<"3-Eliminar Carro del parqueo"<<endl<<"4-Listar Parqueo"<<endl;
		cin>>Respuesta;
	}
	return Respuesta;
}

void liberarMatriz(int**& matriz, int size){
        for(int i= 0; i<size; i++){
                delete[] matriz[i];
                matriz[i] = NULL;
        }

        delete[] matriz;
        matriz = NULL;

        cout<< "Espacio liberado"<< endl;
}			

