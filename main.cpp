#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits> 

using namespace std;

struct Alumno {
	string primerNombre;
	string primerApellido;
	string segundoApellido;
	int cicloEstudio;
	int numeroCedula;
	vector<double> calificaciones; 
	double promedio;
};
