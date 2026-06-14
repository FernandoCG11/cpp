#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <cstdlib>

int generateNumber() {
    return rand()%10;
}

int main() {
    std::list<int> values(10);

    // Generate random numbers
    std::generate(values.begin(),values.end(),generateNumber);

    std::ostream_iterator<int> output(std::cout, "|");
    std::copy(values.begin(),values.end(),output);

    std::list<int>::iterator i;
    i = std::find(values.begin(),values.end(),8);
    return 0;
}
