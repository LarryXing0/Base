#include <iostream>
#include "internal/Context.h"
#include "internal/ConcreteStrategyA.h"
#include "internal/ConcreteStrategyB.h"
#include "internal/ConcreteStrategyC.h"

int main()
{
	Context *context;
	double money;
	std::cin>>money;

	context = new Context(new ConcreteStrategyA(double money));
	context->ContextInterface();

	context = new Context(new ConcreteStrategyB());
	context->ContextInterface();

	context = new Context(new ConcreteStrategyC());
	context->ContextInterface();

	getchar();
}



