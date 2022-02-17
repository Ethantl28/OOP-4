#pragma once

class Leg
{
private:
	bool bRaised;	//Private, so can only be used in this class.
public:
	Leg();
	void Raise();
	void Lower();
};
