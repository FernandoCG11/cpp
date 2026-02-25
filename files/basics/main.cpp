#include <iostream>
#include <fstream>

void write() {
    // como el tipo - nombre de variable
    std::ofstream file;
    std::string fileName;
    std::cout << "Ingrese el nombre del archivo: ";
    getline(std::cin, fileName);

    //file.open("/home/fernando/Downloads/data.txt", std::ios::out); // Abrienndo el archivo
    file.open("/home/fernando/Downloads/" + fileName+ ".txt", std::ios::out); // Abrienndo el archivo

    // Verificar que el archivo se creó
    if (file.fail()) {
        std::cout << "No se pudo abrir el archivo";
        exit(1);
    }
    // Agregar cosas al archivo
    file<<"Que onda mami";
    std::cout << "Si pasa acá";

    // Cerrar el archivo
    file.close();
}


int main() {
    write();
    return 0;
}