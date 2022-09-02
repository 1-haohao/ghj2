#include <iostream>
#include <string> 
#include "Capybara.h" 

using namespace std;

class Wagon
{
public:
	Wagon();
	bool addCapybara(Capybara newCapy);
	void emptyWagon();
	void printCapybaras();
private:
	Capybara all[4];
	int total;
};
