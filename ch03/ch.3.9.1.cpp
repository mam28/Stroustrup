#include "std_lib_facilities.h"

//-------------------------------------------------------------------------------

int main()
{
	char c = 'x';
	int i1 = c;
	int i2 = 'x';
	char c2 = i1;

	// This will print: x 120 120 x
	cout << c << ' ' << i1 << ' ' << i2 << ' ' << c2 << '\n';

	double d1 = 2.3;
	double d2 = d1 + 2;	// 2 is converted to 2.0 before adding

	if (d1 < 0)				// 0 is converted to 0.0 before comparison
		error("d1 is negative");

	return 0;
}

//-------------------------------------------------------------------------------
