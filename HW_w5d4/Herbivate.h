#pragma once
class Herbivate
{
protected:
	int weight;
	bool alive;
public:
	Herbivate() = default;
	Herbivate(int w);
	virtual void Eat();
};

