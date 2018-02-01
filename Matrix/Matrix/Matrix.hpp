#pragma once
class Matrix
{
public:
	Matrix();
	Matrix(int);
	Matrix(int[], int);

	void printTest() const; // for testing purposes
	void set_value(int, int, int);
	int get_value(int, int) const;
	void clear();

private:
	int *matrix;
	int size;
};