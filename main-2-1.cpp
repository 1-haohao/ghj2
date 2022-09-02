#include <iostream>
#include <string> 
#include "Wagon.h"

using namespace std;


int main()
{
	Wagon wagon;
	Capybara* all = new Capybara[5];
	wagon.emptyWagon();
	
	all[0].setName( "AAAA" );
	all[0].setAge( 20 );
	all[1].setName( "BBBB" );
	all[1].setAge( 21 );
	all[2].setName( "CCCC" );
	all[2].setAge( 22 );
	all[3].setName( "DDDD" );
	all[3].setAge( 23 );
	all[4].setName( "FFFF" );
	all[4].setAge( 19 );	
	
	for(int i=0 ; i< 5; i++){
		if( wagon.addCapybara( all[i] ) == false ){
			cout << "Error!" << endl;
		}
	}
	
	wagon.printCapybaras();
	wagon.emptyWagon();

	delete [] all;	
	
	return 0;
}





