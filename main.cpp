#include <iostream>
#include "spell.h"

using namespace std;

int main() {

    spell thing;
    thing.set_attributes("fireball",thing.Fire,thing.aoeDamage,thing.evocation,10,3);

    std::cout << thing.getName();

}