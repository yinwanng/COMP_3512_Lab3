#pragma once
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
private:
	int *matrix;
	int size;
};