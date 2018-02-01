#include "Matrix.hpp"
#include <iostream>
#include <math.h>  

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

Matrix::Matrix(int m[], int sizeArray)
{
	int sqrtNumber = sqrt(sizeArray);

	if ((sqrtNumber * sqrtNumber) == sizeArray) {
		matrix = new int[sizeArray];
		size = sizeArray;
		for (int i = 0; i < sizeArray; ++i)
		{
			matrix[i] = m[i];
		}
	}
	else {
		cout << "The size of the array does not have an integer square root." << endl;
	}
}

// for testing purposes
void Matrix::printTest() const
{
	for (int i = 0; i < size; ++i)
	{
		cout << "[" << i << "] - " <<  matrix[i] << endl;
	}
}

void Matrix::set_value(int row, int column, int value)
{
	int sqrtNumber = sqrt(size);
	matrix[(row * sqrtNumber) + column] = value;
}

int Matrix::get_value(int row, int column) const
{
	int location = (row * sqrt(size)) + column;
	return matrix[location];
}


