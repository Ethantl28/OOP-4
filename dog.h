#pragma once

#include <iostream>
#include "quadruped.h"	

using namespace std;

class Dog : public Quadruped	//Dog IS-A quadruped
{
public:
	void speak();		
};
