// Fig. 3.10: fig03_10.cpp
 // Inclusión de la clase LibroCalificaciones del archivo LibroCalificaciones.h para usarla en main.
 #include <iostream>
 using std::cout;
 using std::endl;

 #include "LibroCalificaciones.h" 
 // la función main empieza la ejecución del programa
 int main()
 {
 // crea dos objetos LibroCalificaciones
 LibroCalificaciones libroCalificaciones1( "CS101 Introduccion a la programacion en C++" );
 LibroCalificaciones libroCalificaciones2( "CS102 Estructuras de datos en C++" );

 // muestra el valor inicial de nombreCurso para cada LibroCalificaciones
 cout << "libroCalificaciones1 creado para el curso: " << libroCalificaciones1.obtenerNombreCurso()
 << "\nlibroCalificaciones2 creado para el curso: " << libroCalificaciones2.obtenerNombreCurso()
 << endl;
 return 0; // indica que terminó correctamente
 } //