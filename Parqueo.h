using namespace std;
#ifndef PARQUEO_H
#define PARQUEO_H
#include "Carro.h"
class parqueo{
	private:
		int pisos;
		int personas;
		int altura;
		int capacidad;
		Carro**** carros;
		int n;
		int m;
		int z;
	public:
	
		parqueo();
		parqueo(int,int,int);
		~parqueo();
		void setpisos(int);
		void setcapacidad(int,int);
		int getcapacidad();
		int getpisos();
		Carro**** getmatriz();
		int getm();
		int getn();
		int getaltura();

		
};
#endif
