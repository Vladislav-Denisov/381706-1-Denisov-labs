#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
	cout << "An example of using the Matrix will be implemented here" << endl;
	TMatrix <int> M1(5), M2(5), R(5);
	int i,j;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5-i; j++) {
			M1[i][j] = (i + 1) * (j + 1);
			M2[i][j] = (i * 10 + j + 3 + i) * 100;
	}
	R = M1 + M2;
	cout << "M1 =" << endl << M1 << endl;
	cout << "M2 =" << endl << M2 << endl;
	cout << "R =" << endl << R << endl;
	R = M1 - M2;
	cout << "R =" << endl << R << endl;
	return 0;
}