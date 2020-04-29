#include "std_lib_facilities.h"

//-------------------------------------------------------------------------------

int main()
{
	int number_of_words = 0;
	string previos = " ";		// njt a word
	string current;
	while (cin >> current) {	// read a stream of words
		++number_of_words;		// increase word count
		if (previos == current)	// check if the word is the same as last
			cout << "word number " << number_of_words
				  << " repeated: " << current << '\n';
		previos = current;
	}

	return 0;
}
