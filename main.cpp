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
