
#include <iostream>
#include "Capybara.h"
#include<ostream>
#include<string>
using namespace std;

// implementation of the default Panda constructor
Capybara::Capybara(){
  Name="";
  Age=0;
}

void Capybara::setName(string capyName){
    Name=capyName;   
}
  string Capybara::getName()
  {
     return Name;
  }
   void Capybara::setAge(int capyAge){
     Age=capyAge;
   }
 int Capybara::getAge(){
   return Age;
 }
 Capybara::~Capybara(){};