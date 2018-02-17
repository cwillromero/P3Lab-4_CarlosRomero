using namespace std;
#include "Parqueo.h"
#include <string>
#include <iostream>
#include "Carro.h"

parqueo::parqueo(){
	pisos=5;
	capacidad=5;
}

parqueo::parqueo(int x, int y, int z){
	personas=x;
	altura=y;
	pisos=z;
	z=z;
	setcapacidad(x,y);
	carros=new Carro***[x];
	for (int i=0;i<x;i++){
		carros[i]=new Carro**[y];	
		for (int j=0;j<capacidad;j++){
			carros[i][j]=new Carro*[y];
			for (int k=0;k<y;k++){
				carros[i][j][k]=NULL;;
			}
		}
	}
}

parqueo::~parqueo(){
	for (int i=0;i!=n;i++){
		for(int j=0;j!=m;j++){
			for (int k=0;k!=z;k++){
				carros[i][j][k]=NULL;
				delete carros[i][j][k];
			}
			delete[] carros[i][j];
		}
		delete [] carros[i];
	}	
	delete[] carros;
}


void parqueo::setcapacidad(int N, int M){
	 n=N/10;
	 m=0;
	if (N<12){
		m=N*0.7;	
	}else{
		m=N*0.4;
	}

}

void parqueo::setpisos(int Pisos){
	pisos=Pisos;

}

int parqueo::getpisos(){
	return pisos;
}

int  parqueo::getcapacidad(){
	return capacidad;
}




Carro**** parqueo::getmatriz(){
	return carros; 
}
int parqueo:: getn(){
	return n;
}

int parqueo:: getm(){
	return n;
}

int parqueo::getaltura(){
	return altura;
}
