#include <iostream>
#include <vector>

struct Stage {
    int hours = 0;
    int minutes = 0;
    int secods  = 0;
};

int main() {
    int n = 0, totalH = 0, totalM = 0 , totalS = 0;
    std::cout << "Enter n stages: ";
    std::cin >> n;
    std::vector<Stage> v(n);

    for (int i = 0; i < n ; i++) {
        std::cin.ignore();
        std::cout << "-- Stage " << i +1 << " --";
        std::cout << "\nEnter hours: ";
        std::cin >> v[i].hours;
        totalH += v[i].hours;

        std::cout << "Enter minutes: ";
        std::cin >> v[i].minutes;
        totalM += v[i].minutes;

        std::cout << "Enter seconds: ";
        std::cin >> v[i].secods;
        totalS +=v[i].secods;
    }

    std::cout << "\nSeconds: " << totalS % 60;
    std::cout << "\nMinutes: " << (totalM % 60 ) + (totalS / 60);
    std::cout << "\nHours: " << (totalH + totalM/60) ;
    return 0;
}