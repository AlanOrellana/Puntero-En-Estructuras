//============================================================================
// Name        : Punto.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;

struct Estudiante{
char* Nombre;
int Carnet;
}Estudiante3;
int main() {

Estudiante estudiante1;
estudiante1.Carnet=23;
estudiante1.Nombre="Juan";

cout<<"Nombre del Estudiante 1: "<<estudiante1.Nombre <<"    Direccion del Nombre: "<<&estudiante1.Nombre<<endl;
cout<<"Carnet del estudiante 1: "<<estudiante1.Carnet <<"      Direccion del Carnet: "<<&estudiante1.Carnet<<endl;

Estudiante estudiante2;
estudiante2.Nombre="Maria";
estudiante2.Carnet=45;

cout<<"Nombre del Estudiante 2: "<<estudiante2.Nombre<<"   Direccion del Nombre: "<<&estudiante2.Nombre<<endl;
cout<<"Carnet del estudiante 2: "<<estudiante2.Carnet<<"      Direccion del Carnet: "<<&estudiante2.Carnet<<endl;

	return 0;
}
