#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    // push_back(val): add element at END
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);

    // emplace_back(val): like push_back, but it builds the element directly in memory
    v.emplace_back(40);

    // begin(): returns a pointer of first element
    auto value = v.begin();
    std::cout << "value of begin : " << *value << std::endl;

    // insert(iterator, val): inserta Antes de la posición indicada
    v.insert(v.begin() +1, 99);

    // pop_back(): elimina el último elemento
    v.pop_back();

    // erase(iterator): elimina el elemento en esa posición
    v.erase(v.begin() +2);

    // at(i): accede al elemento con el índice i CON verificacion de rango (lanza execption si es inválido)
    std::cout << "At: "<< v.at(0) << std::endl;

    // front(): retorna referencia al primer elemento
    std::cout << "Front: " << v.front() << std::endl;

    // back(): retorna por referencia al último elemento
    std::cout << "Back: " << v.back() << std::endl;

    // size(): retorna cuántos elementos tiene actualmente
    std::cout << "Size: " << v.size() << std::endl;

    // reserve(n): reserva memoria para n elementos sin agregarlos (evita reasignaciones)
    v.reserve(20);

    // capacity(): cuánta memoria tiene reservada (puede ser > size);
    std::cout << "Capacity: " << v.capacity() << std::endl;

    // resize(n): cambia el tamaño; si crece, rellena con valor por defecto
    v.resize(5); // v = {10,20,30,0,0};

    // empty(): retorna true si el vector no tiene elementos
    std::cout << "Empty: " << v.empty() << std::endl;

    // Imprimir valores
    for (int &it : v) {
        std::cout << "Values: " << it << std::endl;
    }
    return 0;
}
