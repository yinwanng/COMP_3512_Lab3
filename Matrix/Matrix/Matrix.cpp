#include "Matrix.hpp"
#include <iostream>

using std::cout;
using std::endl;

Matrix::Matrix()
{
	matrix = new int[1];
	matrix[0] = 0;
}

Matrix::Matrix(int n)
{
	if (n > 0) {
		matrix = new int[n * n];
		size = n * n;

		for (int i = 0; i < size; ++i)
		{
			matrix[i] = 0;
		}
	}
	else 
	{
		cout << "The value for the constructor must be positive." << endl;
	}
}

void Matrix::printTest() const
{
	for (int i = 0; i < size; ++i)
	{
		cout << "[" << i << "] - " <<  matrix[i] << endl;
	}
}



