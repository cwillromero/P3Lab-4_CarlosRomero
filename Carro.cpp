#include "Carro.h"
#include <iostream>
#include <string>

using namespace std;

Carro::Carro(string nColor, string nMarca, int nAltura){
	color=nColor;
	marca=nMarca;
	altura=nAltura;
}

//Solo para prueba
Carro::Carro(){
	color="azul";
	marca="ferrari";
	altura=2;
}


string Carro::getColor(){
	return color;	
}

void Carro::setColor(string nColor){
	color=nColor;
}

string Carro::getMarca(){
	return marca;
}

void Carro::setMarca(string nMarca){
	marca=nMarca;
}

int Carro::getAltura(){
	return altura;
}

void Carro::setAltura(int nAltura){
	altura=nAltura;
}

Carro::~Carro(){
	cout<<"Carro destruído."<<endl;
}
