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
      
void pedirDatosAlumno (Alumno& alumno) {
cout << "\n --- Ingreso de Datos para el Alumno --- \n";

cout << "Ingrese primer nombre: ";
cin >> alumno.primerNombre;

cout << "Ingrese primer apellido: ";
cin >> alumno.primerApellido;

cout << "Ingrese segundo apellido: ";
cin >> alumno. segundoApellido;

// Validar ciclo de estudio
alumno.cicloEstudio = pedirNumeroEntero ("Ingrese ciclo de estudio: ") ;

// Validar número de cédula
alumno.numeroCedula = pedirNumeroEntero ("Ingrese numero de cedula: ") ;
}
void pedirNotas (Alumno& alumno) {
alumno.calificaciones.resize (5) ; // Redimensionar el vector a 5 calificaciones

for (int i = 0; i < 5; i++) {
double nota;
do {
cout << "Ingrese la nota del examen #" << (i + 1) << " (0-100) : ";
cin >> nota;
} while (nota < 0 | | nota > 100) ; // Validar que la nota este en el rango [0, 100]

alumno. calificaciones [i] = nota;
}
}
