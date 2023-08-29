#include <iostream>

class Empleado {
private:
    int ClaveEmpleado;
    std::string Nombre, Domicilio, ReportaA;
    float Sueldo;
public:
    Empleado(int clave, std::string nombre, std::string dom, std::string repa, float sueldo) {
        ClaveEmpleado = clave;
        Nombre = nombre;
        Domicilio = dom;
        ReportaA = repa;
        Sueldo = sueldo;
    }
    void Imprime() {
        std::cout << "Clave Empleado: " << ClaveEmpleado << std::endl;
        std::cout << "Nombre: " << Nombre << std::endl;
        std::cout << "Domicilio: " << Domicilio << std::endl;
        std::cout << "Reporta a: " << ReportaA << std::endl;
        std::cout << "Sueldo: " << Sueldo << std::endl;
    }
    void CambiaDomic(std::string domicilio) {
        Domicilio = domicilio;
    }
    void CambiaReporteA(std::string reporte) {
        ReportaA = reporte;
    }
    void ActualSueldo(float sueldo) {
        Sueldo = sueldo;
    }
};

int main()
{
    Empleado JefePlanta(1, "Juan Pablo", "Madagascar, Calle Tortuga #34", "Michael", 7845.6);
    Empleado JefePersonal(2, "Michael", "Madagascar, Calle Tortuga #35", "Juan Pablo", 7855.6);

    int opcion, clave;
    float sueldo;
    std::string domicilio, reporte;

    do {
        std::cout << "--------------------Menu--------------------" << std::endl;
        std::cout << "1. Cambiar domicilio de uno de los empleados" << std::endl;
        std::cout << "2. Actualizar sueldo de un empleado" << std::endl;
        std::cout << "3. Imprimir los datos de un empleado" << std::endl;
        std::cout << "4. Cambiar el nombre de reporta a" << std::endl;
        std::cout << "5. Salir" << std::endl;
        std::cout << "Elija una opcion: ";
        std::cin >> opcion;

        if (opcion != 5) {
            std::cout << "Ingrese la clave del empleado: ";
            std:: cin >> clave;
        } else {
            std::cout << "Saliendo..." << std::endl;
        }

        if (clave == 1) {
            switch (opcion) {
                case 1:
                    std::cout << "Ingrese el nuevo domicilio: ";
                    std::cin >> domicilio;
                    JefePlanta.CambiaDomic(domicilio);
                    break;
                case 2:
                    std::cout << "Ingrese el nuevo sueldo del empleado: ";
                    std::cin >> sueldo;
                    JefePlanta.ActualSueldo(sueldo);
                    break;
                case 3:
                    std::cout << "Datos del empleado: " <<std::endl;
                    JefePlanta.Imprime();
                    break;
                case 4:
                    std::cout << "Ingrese el nuevo nombre de reporte: ";
                    std::cin >> reporte;
                    JefePlanta.CambiaReporteA(reporte);
                default:
                    std::cout << "Opcion incorrecta, intente otra vez" << std::endl;
            }
        } else if (clave == 2) {
            switch (opcion) {
                case 1:
                    std::cout << "Ingrese el nuevo domicilio: ";
                    std::cin >> domicilio;
                    JefePersonal.CambiaDomic(domicilio);
                    break;
                case 2:
                    std::cout << "Ingrese el nuevo sueldo del empleado: ";
                    std::cin >> sueldo;
                    JefePersonal.ActualSueldo(sueldo);
                    break;
                case 3:
                    std::cout << "Datos del empleado: " <<std::endl;
                    JefePersonal.Imprime();
                    break;
                case 4:
                    std::cout << "Ingrese el nuevo nombre de reporte: ";
                    std::cin >> reporte;
                    JefePersonal.CambiaReporteA(reporte);
                default:
                    std::cout << "Opcion incorrecta, intente otra vez" << std::endl;
            }
        } else if (clave && opcion != 5) {
            std::cout << "No existe un empleado con la clave: " << clave << std::endl;
        }

    } while (opcion != 5);
    return 0;
}
