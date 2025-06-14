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

int pedirNumeroEntero (const string& mensaje) {
    int numero;
    while (true) {
    cout << mensaje;
    cin >> numero;
    if (cin.fail() || numero <= 0) { // Verificar si la entrada es válida
    cin.clear () ; // Limpiar el estado de error
    cin. ignore (numeric_limits<streamsize>: :max () , '\n') ; // Ignorar la entrada incorrecta
    cout << "Entrada invalida. Intente de nuevo. \n";
    else {
    cin. ignore (numeric_limits<streamsize>: :max () , '\n') ; // Ignorar el resto de la linea
    break; // Salir del bucle si la entrada es válida
    
    return numero;

