#pragma once
#include <iostream>
using std::ostream;

class Matrix
{
public:
	Matrix();
	~Matrix()
	{
		delete[] matrix;
	}

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
	
	//----
	Matrix& operator++(); //preincrement
	Matrix operator++(int); // postincrement

private:
	int *matrix;
	int size;
};



/*

class Counter {
Counter& operator++() {
// do actual increment
return *this;
}
Counter operator++(Counter) {
Counter tmp(*this);
operator++();
return tmp;
}
};

*/

