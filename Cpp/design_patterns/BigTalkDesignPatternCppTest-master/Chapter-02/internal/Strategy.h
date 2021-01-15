#pragma once

#include <iostream>

class Strategy
{
public:
	Strategy();

	virtual void AlgorithmInterface(double money) = 0;
};