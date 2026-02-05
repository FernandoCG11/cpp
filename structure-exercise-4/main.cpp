#include <iostream>
#include <vector>

struct Athlete {
    std::string name;
    std::string country;
    int nMedals = 0;
};
int main() {
    int n = 0, maxMedals = 0;
    std::string athleteData ;

    std::cout << "Enter athletes total: ";
    std::cin >> n;
    std::vector<Athlete> v(n);

    for (int i = 0; i < n; i++) {
        std::cin.ignore();
        std::cout << "Enter name: ";
        getline(std::cin, v[i].name);

        std::cout << "Enter country: ";
        getline(std::cin, v[i].country);

        std::cout << "Enter medals: ";
        std::cin >> v[i].nMedals;

        if (v[i].nMedals > maxMedals) {
            maxMedals = v[i].nMedals;
            athleteData = "\nName: " + v[i].name + "\nCountry: " + v[i].country + "\nMedals: " + std::to_string(v[i].nMedals);
        }
    }
    // Conviene mejor almacenando la posición del atleta
    std::cout << athleteData;
    return 0;
}