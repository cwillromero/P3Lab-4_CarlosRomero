#ifndef PARQUEO_H
#define PARQUEO_H

using namespace std;
class Parqueo{
	private: 
		int pisos;
		int personas;
		int altura;
		int capacidad;
		Carro*** carros;
	public:
		Parqueo(int, int, int);
		Parqueo();
		int getPisos();
		void setPisos(int);
		int getCapacidad();
		void setCapacidad(int, int);
		void calcularCapacidad(int, int);
		~Parqueo();
};

#endif
