#include <iostream>
#include <list>

int main() {

    std::list<int> lst;

    // push_back(val): agregar al final
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);

    // push_front: agrega al inicio (operación que vector NO tiene eficientemente)
    lst.push_front(5);

    // emplace_back/emplace_front: como push pero construye en sitio
    lst.emplace_back(60);
    lst.emplace_front(1);

    // pop_back: elimina el último
    lst.pop_back();

    // pop_front: elimina el primero
    lst.pop_front();

    // insert(iterator, val): inserta antes de la posición
    auto it = lst.begin();
    ++it;
    lst.insert(it,99);

    // erase(iterator): elimina el elemento apuntado
    lst.erase(it); // Eliminar el valor que esta en el apuntador

    // remove(val): elimina TODOS los elementos con ese valor
    lst.push_back(99);
    lst.remove(99);

    // sort(): ordena la lista
    lst.sort();

    // reverse(): iniverte el orden
    lst.reverse();

    // unique(): elimina duplicados CONSECUTIVOS (se tiene que ordenar primero para eliminarlos)
    lst.push_back(1); lst.push_front(1);
    lst.sort();
    lst.unique();

    // merge(otra_list): fusiona listas ORDENADAS en una sola ordenada
    std::list<int> lst2 = {2,6,8};
    lst.sort();
    lst.merge(lst2); // lst2 queda vacía

    // splice(pos, otra): mueve elementos de otro lista a esta, antes de pos
    std::list<int> lst3 = {100,300};
    lst.splice(lst.begin()  , lst3);

    for (int &x: lst) {
        std::cout << "Value: " << x << std::endl;
    }

    return 0;
}
