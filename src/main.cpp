//============================================================================
// Name        : ForcedDerivation.cpp
// Author      : Andrea Marangoni
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Template.h"
#include "String.h"

using namespace std;


int main() {

	static Template<String> t;


	t.methodThatUsesAnotherMethod();

	return 0;
}
