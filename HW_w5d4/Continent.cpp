#include "Continent.h"

Continent::Continent(Herbivate* hers, Carnivore* cars)
{
	herbs = hers;
	carns = cars;
}

Continent::Continent(const Continent&& cnt)
{
	delete[] herbs;
	herbs = cnt.herbs;
	delete[] carns;
	carns = cnt.carns;
}

Continent::~Continent()
{
	delete[] herbs;
	delete[] carns;
}

void Continent::EatHerbivate()
{
	for (size_t i = 0; i < 20; i++)
	{
		carns->Eat(herbs);
	}
}

void Continent::EatGrass()
{
	herbs->Eat();
}
