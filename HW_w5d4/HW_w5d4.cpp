#include <iostream>
#include"Carnivore.h"
#include"Herbivate.h"
#include "Continent.h"
using namespace std;

int main()
{
    Herbivate* wb;
    wb = new Wildbeest[5];
    Carnivore* lion;
    lion = new Carnivore[5];
    Africa obj(wb, lion);
}
