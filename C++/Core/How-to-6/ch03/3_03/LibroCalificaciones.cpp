#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;



class LibroCalificaciones
{
    public:
        
    void mostrarMensaje(string nombreCurso)
    {
        cout << "Bienvenido al libro de Calificaciones \n" << nombreCurso << "!";
        cout << endl;
    }
   
};
int main()
{
    string nombreDelCurso;
    LibroCalificaciones libro;
    cout << "El nombre inicial del curso es: " << endl;
	getline(cin, nombreDelCurso);
    cout<< "Escriba el nombre del curso: " <<endl;
    getline( cin, nombreDelCurso);
    cout << endl;
    
    libro.mostrarMensaje(nombreDelCurso);
    return 0;
}
