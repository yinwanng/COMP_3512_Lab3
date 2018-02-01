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






	Matrix m1 = Matrix(testValues, 9);
	//m1.printTest();
	m1.set_value(1, 1, 12);
	m1.printTest();
	
	cout << "The position at row 1, column 1 is" << m1.get_value(1,1);



	cout << endl;
	system("pause");
	return 0;
}