#pragma once
class Matrix
{
public:
	Matrix();
	Matrix(int);
	Matrix(int[], int);

	void printTest() const; // for testing purposes
private:
	int *matrix;
	int size;
};