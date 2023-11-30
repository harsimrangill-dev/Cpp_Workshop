#pragma once
// template file

template <typename T, int MAXROWS, int MAXCOLS>
class matrix
{
private:
	T arr[MAXROWS][MAXCOLS];
	int rows;
	int cols;
public:
	matrix() {
		std::cout << "array is called"<<std::endl;
	}
	void setElement(int row, int col, T val) {
		arr[row][col] = val;
	}
	T getElement(int row, int col) {
		return arr[row][col];
	}
};