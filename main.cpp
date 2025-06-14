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