#include <iostream>
#include <fstream>

std::string getFileName() {
    std::string name;
    std::cout << "Into filename: ";
    getline(std::cin, name);
    return "/home/fernando/Downloads/" + name + ".txt";
}

void writeFile(std::ofstream &file) {
    std::string content;
    std::cout << "Ingresa el contenido del archivo: ";
    getline(std::cin, content);
    file << content << std::endl;
    file << content << std::endl;
    file << content << std::endl;
}

std::ofstream createFilename() {
    std::ofstream file;
    file.open(getFileName(), std::ios::out);
    if (!file.is_open()) {
        std::cerr << "Error to create file" <<std::endl;
        exit(1);
    }
    return file;
}

void readFile() {
    std::ifstream file;
    file.open("/home/fernando/Downloads/test.txt",std::ios::in);
    while (!file.eof()) {
        std::string content;
        getline(file, content);
        std::cout << content<< std::endl;
    }
}

int main() {
    std::ofstream file = createFilename();
    writeFile(file);
    readFile();
    return 0;
}