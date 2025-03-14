#include <iostream>
#include <string>

int main() {
    std::string nombre;
    int edad;

    std::cout << "Ingrese su nombre: ";
    std::getline(std::cin, nombre);

    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    std::cout << "El nombre es " << nombre << " de edad " << edad << std::endl;

    return 0;
}