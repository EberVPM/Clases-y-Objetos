#include <iostream>

class Materia {
private:
    int Clave;
    std::string Nombre, ProfesorTit, LibroTexto;
public:
    Materia(int clave, std::string nombre, std::string profesor, std::string libro) {
        Clave = clave;
        Nombre = nombre;
        ProfesorTit = profesor;
        LibroTexto = libro;
    }

    void Imprime() {
        std::cout << "Clave de la materia: " << Clave << std::endl;
        std::cout << "Nombre de la materia: " << Nombre << std::endl;
        std::cout << "Nombre del profesor: " << ProfesorTit << std::endl;
        std::cout << "Nombre del libro: " << LibroTexto << std::endl;
    }

    void CambioClave(int nuevaClave) {
        Clave = nuevaClave;
    }

    void CambiaProfe(std::string profe) {
        ProfesorTit = profe;
    }
};

int main()
{
    int opcion, clave, nuevaClave;
    int clavepro = 1, clavedb = 2;
    std::string maestro;

    Materia Programacion(clavepro, "Programacion", "Francisco", "Programacion");
    Materia BasesDatos(clavedb, "Base de datos", "Antonieta", "DB2");

    do {
        std::cout << "--------------------------Menu--------------------------" << std::endl;
        std::cout << "1. Cambiar clave de la materia programacion" << std::endl;
        std::cout << "2. Cambiar nombre del maestro de base de datos" << std::endl;
        std::cout << "3. Imprimir todos los datos de la materia base de datos" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Elija una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese la nueva clave: ";
                std::cin >> nuevaClave;

                clavepro = nuevaClave;
                Programacion.CambioClave(nuevaClave);
                break;
            case 2:
                std::cout << "Ingrese el nuevo nombre del maestro: ";
                std::cin >> maestro;

                BasesDatos.CambiaProfe(maestro);
                break;
            case 3:
                BasesDatos.Imprime();
                break;
            case 4:
                std::cout << "Saliendo..." << std::endl;
                break;
            default:
                std::cout << "Opcion incorrecta, intente de nuevo" << std::endl;
        }

    } while (opcion != 4);
    return 0;
}
