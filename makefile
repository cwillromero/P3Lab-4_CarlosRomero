temp:	main.o Carro.o Parqueo.o 
	g++ main.o Carro.o Parqueo.o -o temp  

main.o:	main.cpp Carro.h Parqueo.h
	g++ -c main.cpp

Parqueo.o:	Parqueo.h Parqueo.cpp Carro.h
	g++ -c Parqueo.cpp

Carro.o:	Carro.h Carro.cpp
	g++ -c Carro.cpp
