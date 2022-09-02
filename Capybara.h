#ifndef Capybara_H
#define Capybara_H

#include <string>
using namespace std;
// Class definition for a classroom
class Capybara
{
public: 
int Age;
string Name;
	Capybara() ;     // no name or age is required to create a Capybara
    void setName(string capyName);   // change the capybara's name
    string getName();
    void setAge(int capyAge);        // change the capybara's age
    int getAge();
    ~Capybara();
    
};
#endif