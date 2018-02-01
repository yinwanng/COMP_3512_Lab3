#pragma once
class Matrix
{
public:
	Matrix();
	Matrix(int);
	Matrix(int[], int);

	void printTest() const; // for testing purposes
	void set_value(int, int, int);

private:
	int *matrix;
	int size;
};