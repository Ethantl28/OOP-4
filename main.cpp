#include <iostream>
#include "cat.h"
#include "dog.h"

using namespace std;

int main()
{
	Dog lassie;
	Cat garfield;

	lassie.raiseLeg(2);
	garfield.raiseLeg(0);

	cout << "Lassie said ";
	lassie.speak();
	cout << "Garfield said "; 
	garfield.speak();
	cout << endl;

	system("pause");
	return 0;
}
