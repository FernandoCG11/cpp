#include <iostream>

#include "Cow.h"
#include "LivingOrganism.h"

int main() {
    LivingOrganism* cow = new Cow();
    cow->feedOneself();
    return 0;
}
