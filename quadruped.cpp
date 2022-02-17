#include "quadruped.h"

void Quadruped::raiseLeg(int legIndex)
{
	if (legIndex > 0 && legIndex < kiNoLegs)
	{
		legs[legIndex].Raise();
	}
}

void Quadruped::lowerLeg(int legIndex)
{
	if (legIndex > 0 && legIndex < kiNoLegs)
	{
		legs[legIndex].Lower();
	}
}
