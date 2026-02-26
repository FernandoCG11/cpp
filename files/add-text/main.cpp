#include <iostream>
#include <fstream>

int main() {
    std::ofstream file;

    // Abrir archivo
    file.open("/home/fernando/Downloads/mascabron.txt", std::ios::app); // Abrimos el archivo en este modo de edición
    if (!file.is_open()) {
        std::cerr << "Error to open file" << std::endl;
        exit(1);
    }

    file << "\nEl mismo pero más cabrón";
    file << "\nSisisi cómo no";
    file.close();
    return 0;
}