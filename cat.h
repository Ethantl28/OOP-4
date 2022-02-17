#pragma once

#include <iostream>
#include "quadruped.h"

using namespace std;

class Cat : public Quadruped	//Cat IS-A quadruped
{
public:
	void speak();
};
