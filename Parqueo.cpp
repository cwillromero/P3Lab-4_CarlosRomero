#include "Parqueo.h"
#include <iostream>
#include <string>
using namespace std;

Parqueo::Parqueo(int x,int y, int z){
	pisos=nPisos;
	capacidad=nCapacidad;
	personas=x;
	pisos=y;
	altura=z;
	setCapacidad(x,y);

	carros=new Carro***[x];
	for(int i=0; i<x; i++){
		carros[i]=new Carro**[y];
	       for(int j=0; j<y; j++){
	       		carros[i][j]=new Carro*[z];
			for(int k=0; k<z; k++){
				carros[i][j][k]=NULL;
			}
	       }	       
	}

}

Parqueo::~Parqueo(){
	cout<<"Destruccion de Parqueo"<<endl;
	int x=personas;
	int y=pisos;
	int z=pisos;
	for(int i=0; i!=x; i++){
		for(int j=0; j!=y; j++){
			for(int k=0; k!=y; k++){
				carros[i][j][k]=NULL;
				delete carros[i][j][k];
			}
			delete carros[i][j];
		}
		delete[] carros;
	}
}

int Parqueo::getPisos(){
	return pisos;
}

void Parqueo::setPisos(int nPisos){
	pisos=nPisos;
}

int Parqueo::getCapacidad(){
	return capacidad;
}

void Parqueo::setCapacidad(int n, int m){
	n=n/10;
	if(n>12){
		m=n*0.7;
	}else{
		m=n*0.4;
	}
	capacidad=n*m;
}

void Parqueo::calcularCapacidad(int n, int m){
	n=n/10;
	if(n>12){
		m=n*0.7;
	}else{
		m=n*0.4;
	}	
	
}
