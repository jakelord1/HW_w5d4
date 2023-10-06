#pragma once
class Herbivate
{
protected:
	int weight;
	bool alive;
public:
	Herbivate() = default;
	Herbivate(int w);

	int GetWeight() { return weight; };
	void SetAlive(bool a) { alive = a; };
	void Eat();
};
class Wildbeest : public Herbivate {

};

