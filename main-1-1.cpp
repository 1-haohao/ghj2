#include <iostream>
#include "Capybara.h"
#include<ostream>
#include<string>

using namespace std;

// main program
int main()
{
	Capybara a[4];
	a[1].setName("A");
	a[1].setAge(1);
	a[2].setName("B");
	a[2].setAge(2);
	a[3].setName("C");
	a[3].setAge(3);
	a[4].setName("D");
	a[4].setAge(4);
	for(int b=0; b<4; b++){
		cout<< b+1<<"name is"<<a[b].getName()<<"age="<<a[b].getAge()<<endl;
	}
}
