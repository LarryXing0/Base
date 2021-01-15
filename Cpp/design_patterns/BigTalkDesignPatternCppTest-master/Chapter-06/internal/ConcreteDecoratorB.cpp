#include "ConcreteDecoratorB.h"

#include <iostream>

void ConcreteDecoratorB::Operation()
{
	Decorator::Operation();
	this->AddedBehavior();
	std::cout << "abstract B operation" << std::endl;
}

void ConcreteDecoratorB::AddedBehavior()
{
	// TO-DO
}
