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
	
	return 0;
}
