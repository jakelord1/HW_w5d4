#include "Herbivate.h"

Herbivate::Herbivate(int w)
{
	weight = w;
	alive = true;
}

void Herbivate::Eat()
{
	weight += 2;
}
