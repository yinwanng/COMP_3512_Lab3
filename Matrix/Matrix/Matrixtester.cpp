#include <iostream>
#include "Matrix.hpp"

using std::cout;
using std::endl;
using std::nothrow;

int main()
{
	cout << "Hello Lab 3" << endl;
	int testValues[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
	//Matrix m{ 3 };
	//m.printTest();


	Matrix *m1 = new (nothrow) Matrix(testValues, 9);
	if (m1 == nullptr) {
		cout << "Error: memory could not be allocated";
	}

	//Matrix m1 = Matrix(testValues, 16);
	//m1.printTest();
	m1->set_value(1, 1, 3);
	m1->printTest();
	
	cout << "The position at row 1, column 1 is " << m1->get_value(1,1) << endl;
	//m1.clear();
	m1->printTest();
	cout << endl;


	m1->printMatrixTest();

	Matrix *m2 = new (nothrow) Matrix();
	if (m2 == nullptr) {
		cout << "Error: memory could not be allocated";
	}
	m2 = m1;

	cout << "Matrix m2" << endl;
	m2->printMatrixTest();
	cout << "Test below: " << endl;
	cout << m2 << endl;


	cout << endl;
	system("pause");
	return 0;
}