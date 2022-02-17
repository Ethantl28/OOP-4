#pragma once

#include "leg.h" 

class Quadruped
{
protected:
	static const int kiNoLegs = 4;
	Leg legs[kiNoLegs];
public:
	void raiseLeg(int legIndex);
	void lowerLeg(int legIndex);
};
