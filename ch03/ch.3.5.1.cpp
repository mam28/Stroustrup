#include "std_lib_facilities.h"

//-------------------------------------------------------------------------------

int main()
{
	string previos = " ";		// njt a word
	string current;
	while (cin >> current) {	// read a stream of words
		if (previos == current)	// check if the word is the same as last
			cout << "repeared word: " << current << '\n';
		previos = current;
	}

	return 0;
}
