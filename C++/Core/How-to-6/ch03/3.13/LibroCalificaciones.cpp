#include <iostream>


using namespace std;

class LibroCalificaciones
{
    public:
        void fijarNombreCurso(string nombre)
        {
            nombreCurso = nombre;
        }

        string darNombreCurso()
        {
            return nombreCurso;
        }
    void mostrarMensaje(string nombreCurso)
    {
        cout << "Bienvenido al libro de Calificaciones \n" << darNombreCurso() << "!" <<endl;
    }
    private:
        string nombreCurso;
};
int main()
{
    string nombreDelCurso;
    LibroCalificaciones lc;
    cout << "El nombre inicial del curso es: " <<lc.darNombreCurso() << endl;
    cout<< "Escriba el nombre del curso: " <<endl;
    getline( cin, nombreDelCurso);
    cout << endl;
    lc.fijarNombreCurso(nombreDelCurso);
    lc.mostrarMensaje(nombreDelCurso);
    return 0;
}
