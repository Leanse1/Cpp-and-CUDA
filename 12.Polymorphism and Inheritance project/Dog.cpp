#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog(string name, double weight, string breed) : Animal(name, weight) //inheritance
{
	this->breed = breed;

}
string Dog::getBreed() const
{
	return breed;

}
void Dog::digHole() const
{
	cout << " I am digging a hole" << endl;
}
string Dog::makeNoise() const
{
	return "woof!";
}
void Dog::chaseCat() const
{
	cout << " Here, kitty kitty" << endl;
}
