#include <iostream>
#include <string>
#include <vector>  
using namespace std;

//Prototipos de los metodos.

//Menu principal del programa.
int menu();
//Liberar memoria de la matriz
void liberarMatriz(int**&, int);
//Liberar memoria de la matriz.
void liberarTablero(string**&,int);

int main()
{	bool Continuar=1;
	vector<string> Array;
	while (Continuar){
		//Llamado del menu del programa.
		switch(menu()){
			case 1:{//
				cout<<"Usted selecciono: "<<endl;

				break;
				}//Fin del case 1.
			case 2:{//
				cout<<"Usted selecciono: "<<endl;

				break;
				}//Fin del case 2

			case 3:{//
				cout<<"Usted selecciono: "<<endl;

				break;
				}//Fin del case 3

			case 4:{//
				cout<<"Usted selecciono: "<<endl;

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
		cout<<"Lab#4 CarlosRomero"<<endl<<"Ingrese una opción:  "<<endl;
		cout <<"1-"<<endl<<"2-"<<endl<<"3-"<<endl<<"4-"<<endl;
		cin>>Respuesta;
	}
	return Respuesta;
}//Fin del metodo del Menu.



//liberar memoria
void liberarMatriz(int**& matriz, int size){
        for(int i= 0; i<size; i++){
                delete[] matriz[i];
                matriz[i] = NULL;
        }

        delete[] matriz;
        matriz = NULL;

        cout<< "Memoria Liberada"<< endl;
}
//Liberar memoria de la matriz.
void liberarTablero(string**& tablero, int size){
        for(int i = 0; i< size; i++){
                delete[] tablero[i];
                tablero[i] = NULL;
        }

        delete[] tablero;
        tablero = NULL;
	cout<<"Hola bb"<<endl;
        cout<< "Memoria Liberada "<< endl;
}

