#include <iostream>
#include <string>
#include <vector> 
#include "Carro.h"
#include "Parqueo.h"
using namespace std;
int menu();
parqueo crearParqueo();
//Carro crearcarro(*Carro****);

int main()
{	bool Continuar=1;
	parqueo Global;
	while (Continuar){
		switch(menu()){
			case 1:{
				Global=crearParqueo();
				break;
				}
			case 2:{

				break;
				}

			case 3:{

				break;
				}

			case 4:{

				break;
				}
			default:{
				break;
				}

		}	
	cout<<"Continuar?[0-No/1-Si]"<<endl;
	cin>>Continuar;
	}
	return 0;
}

/*Carro crearcarro(*Carro**** parqueo){
	int piso=0;
	int alturac;
	string matricula;
	strinc color;
	cout<<"Ingrese el piso para estacionar";
	cin>>piso;
	Carro temp;
	cout<<"Ingrese la matricula del carro";
	cin>>matricula;
	cout<<"Ingrese el color";
	cin >>color;
	cout<<"Ingrese la altura";
	cin>>alturac;
	for (int i=0;i<;i++){
		for (int j=0;j<;j++){
			if (carro[piso][i][j]==NULL){
				temp =new carro();
				carro[piso][i][j]=new Carro();
			}
		}
	}


}*/


parqueo crearParqueo(){
	int personas=-5;
	int pisos=0;
	int altura=0;
	while (personas<=50||personas>=100){
		cout<<"Ingrese la cantidad de personas: "<<endl;
		cin>>personas;
	}
	cout<<"Ingrese la altura del parqueo: "<<endl;
	cin>>altura;
	cout<<"ingrese la cantidad de pisos de la matriz: "<<endl;
	cin>>pisos;
	parqueo Temp = new parqueo(personas,pisos,altura);
}

 
int menu(){
	int Respuesta=-100;
	while(Respuesta<=0||Respuesta>4){
		cout<<"Bienvenido al laboratorio #"<<endl<<"Seleccione la opcion que desea: "<<endl;
		cout <<"1-Crear parqueo."<<endl<<"2-Crear Carros y Agregar al parqueo"<<endl<<"3-Eliminar Carro del parqueo"<<endl<<"4-Listar Parqueo."<<endl;
		cin>>Respuesta;
	}
	return Respuesta;
}

