#pragma once
class Matrix
{
public:
	Matrix();
	Matrix(int n);
	void printTest() const;
private:
	int *matrix;
	int size;
};