#include<string>
using namespace std;

#ifndef CARRO_H
#define CARRO_H

class Carro{
	private:
		string color;
		string marca;
		int altura;
	public: 
		Carro();
		Carro(string, string, int);
		string getColor();
		void setColor(string);
		string getMarca();
		void setMarca(string);
		int getAltura();
		void setAltura(int);

		~Carro();
};
#endif

