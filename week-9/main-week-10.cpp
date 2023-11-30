// main file  for week 10 it has only one file 
#include<iostream>
#include<string>
#include"matrix.h"
using namespace std;
//task - 1

template <typename T>

void swap_vars(T& a, T& b) {
	T c = a;
	a = b;
	b = c;

}

//task 2
template <typename T>
int cmp(T a, T b);

//implemetation

int main()
{
	int x = 10;
	int y = 20;
	swap_vars(x, y);
	cout << "x = " << x << ", y = " << y << endl;
	string s = "first";
	string t = "second";
	swap_vars(s, t); // won’t work!
	cout << "s = " << s << ", t = " << t << endl;

	//task 2 implementation
	matrix<int, 5, 5> i_mat; // 5x5 matrix
	i_mat.setElement(0, 0, 10);
	cout << i_mat.getElement(0, 0) << endl; // 10.0
	matrix<float, 7, 7> f_mat; // 7 x 7 matrix
	f_mat.setElement(0, 0, 7.5);
	cout << f_mat.getElement(0, 0) << endl; // 7.5

	// fourth implementation 
	// integer comparison
	cout << cmp(10, 20) << endl; //should print out -1, because 10 < 20
	// string comparison
	string h("hello"), w("world"); //ensure you use #include<string>
	cout << cmp(h, w) << endl; //should print -1 because “hello” < “world”
	// char[] comparison
	char c1[]{ "hello" }; 
	char c2[] {"world"};
	cout << cmp(c1,c2) << endl;

	return 0;
}

//task three 

template <typename T>
int cmp(T a, T b) {
	if (a < b) { return -1; }
	else if (a > b) { return 1; }
	else { return 0; }
}

int cmp(char a[], char b[]) {
	cout << "Char strcmp is called" << endl;
	return strcmp(b, a);

}
