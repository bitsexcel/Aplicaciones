

 #include <string> // la clase LibroCalificaciones utiliza la clase string estándar de C++
 using std::string;

 // definición de la clase LibroCalificaciones
 class LibroCalificaciones
 {
 public:
 // el constructor inicializa nombreCurso con la cadena que se suministra como argumento
 LibroCalificaciones( string );

 // función para establecer el nombre del curso
 void establecerNombreCurso( string );
 

 // función para obtener el nombre del curso
 string obtenerNombreCurso();

 // muestra un mensaje de bienvenida al usuario de LibroCalificaciones
 void mostrarMensaje();
 
 private:
 string nombreCurso; // nombre del curso para este LibroCalificaciones
 }; // fin de la clase LibroCalificaciones