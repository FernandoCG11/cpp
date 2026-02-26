#include <iostream>
#include <fstream>

void readFile() {
    std::ifstream file;
    file.open("/home/fernando/Downloads/mascabron.txt", std::ios::in); // Archivos de solo lecura
    if (!file.is_open()) {
        std::cerr << "Can not open file" << std::endl;
        exit(1);
    }
    while (!file.eof()) { // Mientras no sea el final del archivo
        std::string content;
        getline(file,content); // Obtener el contenido del archivo
        std::cout << content << std::endl;
    }
}
int main() {
    readFile();
    return 0;
}
