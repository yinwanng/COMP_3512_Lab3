#pragma once
#include <iostream>
using std::ostream;

class Matrix
{
public:
	Matrix();
	Matrix(int);
	Matrix(int[], int);

	void printTest() const; // for testing purposes
	void printMatrixTest() const; // testing matrix appeareance
	void set_value(int, int, int);
	int get_value(int, int) const;
	void clear();
	friend void swap(Matrix&, Matrix&);
	Matrix& operator=(Matrix);
	friend ostream& operator <<(ostream&, const Matrix&);
private:
	int *matrix;
	int size;
};