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

void Matrix::printMatrixTest() const
{
	int sqrtNumber = sqrt(size);
	for (int i = 0; i < size; ++i)
	{
		cout << matrix[i] << "    ";
		if (i % sqrtNumber == sqrtNumber-1)
		{
			cout << "\n";
		}
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

void Matrix::clear()
{
	for (int i = 0; i < size; ++i)
	{
		matrix[i] = 0;
	}
}

Matrix & Matrix::operator=(Matrix other)
{
	swap(*this, other);
	return *this;
}

 inline bool operator==(const Matrix &m1, const Matrix &m2)
{
	if (m1->size == m2->size) {
		
		
	}
	return false;
}







Matrix& Matrix::operator++() //preincrement
{
	for (int i = 0; i < size; ++i)
	{
		//this->matrix[i] = this->matrix[i] + 1;
		matrix[i]++;
	}
	return *this;
}

Matrix Matrix::operator++(int)
{
	Matrix tmp(*this);
	operator++();
	return tmp;
}



void swap(Matrix &first, Matrix &second)
{
	using std::swap;
	swap(first.size, second.size);
	swap(first.matrix, second.matrix);
}

ostream & operator<<(ostream &out, const Matrix &m)
{
	int sqrtNumber = sqrt(m.size);
	for (int i = 0; i < m.size; ++i)
	{
		out << m.matrix[i];
		if (i % sqrtNumber == sqrtNumber - 1)
		{
			out << "\n";
		}
	}
	return out;
}






//=================================
/*

1. inline bool operator==(const X& lhs, const X&
rhs)
{ //do actual comparison
}
2. inline bool operator!=(const X& lhs, const X&
rhs)
{
return !operator==(lhs, rhs);
}
3. inline bool operator< (const X& lhs, const X&
rhs)
{ //do actual comparison
}


4. inline bool operator> (const X& lhs, const X&
rhs)
{
return operator< (rhs, lhs);
}
5. inline bool operator<=(const X& lhs, const X&
rhs)
{
return !operator> (lhs, rhs);
}
6. inline bool operator>=(const X& lhs, const X&
rhs)
{
return !operator< (lhs, rhs);
}
*/



/*

// do +=, +, -=, -
lass Fraction {
Fraction& operator+=(const Fraction& rhs) {
// actual addition of rhs to *this
return *this;
}
};
inline Fraction operator+(Fraction lhs,
const Fraction& rhs){
lhs += rhs; return lhs;}







*/



