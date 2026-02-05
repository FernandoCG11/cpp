#include <algorithm>
#include <cstring>
#include <iostream>

void enterName(std::string* name) {
    std::cout << "Enter name: ";
    getline(std::cin, *name);
}

void checkValue(int* x,const char& s, const char& v) {
    if (s == v)  *x+=1;
}

void overString(int* total,std::string* s) {
    char arr[std::size(*s) +1];
    strcpy(arr, &*s->c_str());
    for (int i = 0; i < std::size(*s); i++) {
        checkValue(total, 'A', arr[i]);
        checkValue(total, 'E', arr[i]);
        checkValue(total, 'I', arr[i]);
        checkValue(total, 'O', arr[i]);
        checkValue(total, 'U', arr[i]);
    }
}

int main() {
    int totalVowels = 0;
    int* ptr = &totalVowels;
    std::string name;
    std::string* namePrt = &name;

    enterName(namePrt);
    std::transform((*namePrt).begin(),(*namePrt).end(), (*namePrt).begin(),::toupper);
    overString(ptr, namePrt);
    std::cout << "Total of vowels: " << totalVowels;
    return 0;
}