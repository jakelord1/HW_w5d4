#pragma once
#include "Herbivate.h"
class Carnivore
{
protected:
	int power;
public:
	Carnivore() = default;
	Carnivore(int p) { power = p; };
	virtual void Eat(Herbivate* h) = 0;
};

class Lion : public Carnivore {
public:
	Lion() = default;
	Lion(int p) : Carnivore(p) {};

	void Carnivore::Eat(Herbivate* h) {
		if (power >= h->GetWeight()) {
			power += 10;
		}
		else
			power -= 10;
		h->SetAlive(false);
	}
};
