#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdint.h>
#include <string>
#include <vector>
#include <sstream>
#include "Python.h"
#include <stdlib.h>
#include <bitset>

/* 
** Currently very slow version that will be altered when the data comes out properly again so it can be used through DeweSoft on launch night
*/

int main (int argc, char *argv[])
{	 
	/*The size of the detector*/
	int num_row    = 1024;
	int num_column = 1024;
	
	std::cout<<"FIXED IT";
	
	/*Initialize a Python environment*/
	Py_Initialize();
	
	Py_Finalize();
	return 0;
}
