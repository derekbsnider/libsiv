//////////////////////////////////////////////////////////////////////////
//									//
// siv main source file				2020 Derek Snider	//
//									//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <sysexits.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <queue>
#include <stack>
#define DBG(x)
#include "tokens.h"
#include "datadef.h"
#include "siv.h"

using namespace std;

int main(int argc, char **argv)
{
    stringstream ss;
    Program prog;
    TokenProgram *tp;

    prog.colors = true;

    if ( argc < 2 )
    {
	std::cout << "Usage: siv <file.siv>" << std::endl << std::endl;
	std::cout << "Tokenize and display a color syntax highlighted display of a sieve format file" << endl;

	return EX_USAGE;
    }

    if ( !(tp=prog.tokenize(argv[1])) )
	return EX_NOINPUT;

    return EX_OK;
}
