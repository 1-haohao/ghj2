#include <iostream>
#include <string> 
#include "Wagon.h" 

using namespace std;

Wagon :: Wagon(){
	this->total = 0;
}

bool Wagon :: addCapybara(Capybara newCapy){
	if(this->total >= 4){
		return false;
	}
	this->all[ (this->total) ++ ] = newCapy;
	return true;
}

void Wagon :: emptyWagon(){
	this->total= 0;
}

void Wagon :: printCapybaras(){
	for(int i=0 ; i<this->total ; i++){
		cout << all[i].getName() << " " << total[i].getAge() << endl;
	}
}
