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
    cin. ignore (numeric_limits<streamsize>::max () , '\n') ; // Ignorar la entrada incorrecta
    cout << "Entrada invalida. Intente de nuevo. \n";
	}else {
    cin. ignore (numeric_limits<streamsize>::max () , '\n') ; // Ignorar el resto de la linea
    break; // Salir del bucle si la entrada es válida
	}
	}

    return numero;
}

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
} while (nota < 0 || nota > 100) ; // Validar que la nota este en el rango [0, 100]

alumno. calificaciones [i] = nota;
}
}
double calcularPromedio(const Alumno& alumno) {
	double suma = 0.0;
	for (double calificacion : alumno.calificaciones) {
		suma += calificacion;
	}
	return suma / 5; // Promedio de 5 exámenes
}

void mostrarResultados(const vector<Alumno>& aprobados, const vector<Alumno>& reprobados) {
	cout << "\n==================== RESULTADOS ====================\n";

	// Mostrar aprobados
	cout << "\n-------------------- APROBADOS --------------------\n";
	cout << left << setw(30) << "Nombre Completo" 
		<< setw(10) << "Ciclo" 
		<< setw(10) << "Cédula" 
		<< "Promedio\n";
	cout << "--------------------------------------------------------------\n";
	
	for (const Alumno& alumno : aprobados) {
		cout << left << setw(30) << (alumno.primerNombre + " " + alumno.primerApellido + " " + alumno.segundoApellido)
			<< setw(10) << alumno.cicloEstudio 
			<< setw(10) << alumno.numeroCedula 
			<< fixed << setprecision(2) << alumno.promedio << endl;
	}
	
	// Mostrar reprobados
	cout << "\n-------------------- REPROBADOS --------------------\n";
	cout << left << setw(30) << "Nombre Completo" 
		<< setw(10) << "Ciclo" 
		<< setw(10) << "Cédula" 
		<< "Promedio\n";
	cout << "--------------------------------------------------------------\n";
	
	for (const Alumno& alumno : reprobados) {
		cout << left << setw(30) << (alumno.primerNombre + " " + alumno.primerApellido + " " + alumno.segundoApellido)
			<< setw(10) << alumno.cicloEstudio 
			<< setw(10) << alumno.numeroCedula 
			<< fixed << setprecision(2) << alumno.promedio << endl;
	}
	
	cout << "\nUNA 2025\n";
}


int main() {
	int nAlumnos = pedirNumeroEntero("¿Cuántos alumnos desea evaluar?: "); // Pedir número de alumnos
	
	vector<Alumno> alumnos(nAlumnos); // Crear vector de alumnos
	vector<Alumno> aprobados;
	vector<Alumno> reprobados;
	
	for (int i = 0; i < nAlumnos; i++) {
		pedirDatosAlumno(alumnos[i]); // Pedir datos del alumno
		pedirNotas(alumnos[i]); // Pedir notas
		alumnos[i].promedio = calcularPromedio(alumnos[i]); // Calcular promedio
		
		// Determinar estado
		if (alumnos[i].promedio >= 70.0) {
			aprobados.push_back(alumnos[i]);
		} else {
			reprobados.push_back(alumnos[i]);
		}
	}
	
	mostrarResultados(aprobados, reprobados); // Mostrar resultados
	
	for (const Alumno& alumno : reprobados) {
		cout << left << setw(30) << (alumno.primerNombre + " " + alumno.primerApellido + " " + alumno.segundoApellido)
			<< setw(10) << alumno.cicloEstudio 
			<< setw(10) << alumno.numeroCedula 
			<< fixed << setprecision(2) << alumno.promedio << endl;
	}
	
	cout << "\nUNA 2025\n";

	return 0;
}
