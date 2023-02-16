// Fig. 3.9: LibroCalificaciones.h
// Definición de la clase LibroCalificaciones en un archivo separado de main.
 #include <iostream>
 using std::cout;
 using std::endl;


 #include "LibroCalificaciones.h"

 

 // el constructor inicializa nombreCurso con la cadena que se suministra como argumento
 LibroCalificaciones::LibroCalificaciones( string nombre )
 {
 establecerNombreCurso( nombre ); // llama a la función establecer para inicializar nombreCurso
 } // fin del constructor de LibroCalificaciones

 // función para establecer el nombre del curso
 void LibroCalificaciones::establecerNombreCurso( string nombre )
 {
	 nombreCurso = nombre; // almacena el nombre del curso en el objeto
 } // fin de la función establecerNombreCurso

 // función para obtener el nombre del curso
 string LibroCalificaciones::obtenerNombreCurso()
 {
 return nombreCurso; // devuelve el nombreCurso del objeto
 } // fin de la función obtenerNombreCurso

 // muestra un mensaje de bienvenida al usuario de LibroCalificaciones
 void LibroCalificaciones::mostrarMensaje()
 {
 // llama a obtenerNombreCurso para obtener el nombreCurso
 cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso()
 << "!" << endl;
 } // fin de la función mostrarMensaje
