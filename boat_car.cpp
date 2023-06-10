#include <iostream>
class Boat {
public:
	friend getTotalWeight();
private:
	float weight;
};
class Car {
public:
	friend getTotalWeight();
private:
	float weight;
};
float getTotalWeight(){}