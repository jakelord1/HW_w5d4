#pragma once
#include "Carnivore.h"
#include "Herbivate.h"
class Continent
{
protected:
	Herbivate* herbs;
	Carnivore* carns;
public:
	Continent() = default;
	Continent(Herbivate* hers, Carnivore* cars);
	Continent(const Continent&& cnt);
	~Continent();
	void EatHerbivate();
	void EatGrass();
};
class North_America : Continent {

};
class Africa : Continent {
	Africa(Herbivate* hers, Carnivore* cars) : Continent(hers, cars) {};
};