#include "Carro.h"
#include "Parqueo.h"
#include <iostream>
#include <string>
#include <vector> 

using namespace std;

//Prototipos de los metodos.

int menu();
void crearParqueo();

int main()
{	bool Continuar=1;
	vector<string> Array;
	while (Continuar){
		//Llamado del menu del programa.
		switch(menu()){
			case 1:{//
				cout<<"Seleccion: "<<endl;

				break;
				}//Fin del case 1.
			case 2:{//
				cout<<"Seleccion: "<<endl;

				break;
				}//Fin del case 2

			case 3:{//
				cout<<"Seleccion: "<<endl;

				break;
				}//Fin del case 3

			case 4:{//
				cout<<"Seleccion: "<<endl;

				break;
				}//Fin del case 4.
			default:{//		
				cout<<"OPCION NO VALIDA"<<endl;

				break;
				}//FIn del default

		}//Fin del switch.	
	cout<<"Desea Continuar en el sistema?[0/1]"<<endl;
	cin>>Continuar;
	}//FIn del while.
return 0;
}


//Menu principal del programa
int menu(){
	int Respuesta=-100;
	while(Respuesta<=0||Respuesta>4){
		cout<<"Lab#4 CarlosRomero"<<endl<<"Ingrese una opción: "<<endl;
		cout <<"1- Crear Edificio "<<endl<<"2- Crear Carro y Agregar al Parqueo"<<endl
		<<"3- Eliminar Carro del Parqueo"<<endl<<"4- Listar Parqueos"<<endl<<"Salir"<<endl;
		cin>>Respuesta;
	}
	return Respuesta;
}//Fin del metodo del Menu.



//liberar memoria
/*void liberarMatriz(int**& matriz, int size){
        for(int i= 0; i<size; i++){
                delete[] matriz[i];
                matriz[i] = NULL;
        }

        delete[] matriz;
        matriz = NULL;

        cout<< "Memoria Liberada"<< endl;
}*/
//Liberar memoria de la matriz.
/*void liberarTablero(string**& tablero, int size){
        for(int i = 0; i< size; i++){
                delete[] tablero[i];
                tablero[i] = NULL;
        }
        delete[] tablero;
        tablero = NULL;
        cout<< "Memoria Liberada."<< endl;
}*/

