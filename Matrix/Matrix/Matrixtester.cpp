#include <iostream>
#include "Matrix.hpp"

using std::cout;
using std::endl;

int main()
{
	cout << "Hello Lab 3" << endl;
	int testValues[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//Matrix m{ 3 };
	//m.printTest();






	Matrix m1 = Matrix(testValues, 2);
	m1.printTest();

	system("pause");
	return 0;
}