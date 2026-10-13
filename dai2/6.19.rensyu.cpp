#include <iostream>
using namespace std;

int main() {
	int a;
	int* p;
	p = &a;
	cout << "p = " << (size_t)p << endl
		<< "&a = " << (size_t) & a << endl;

	double b;
	double* q;
	q = &b;
	cout << "q = " << (size_t)q << endl
		<< "&b = " << (size_t) & b << endl;

	char c;
	char* o;
	o = &c;
	cout << "o = " << (size_t)o << endl
		<< "&c = " << (size_t)&c << endl;

	int x;
	int* u = &x;
	x = 2;
	cout << "x = " << x << endl
		<< "*u = " << *u << endl;
	*u = 5;
	cout << "x = " << x << endl
		<< "*u = " << *u << endl;

	double y;
	double* i = &y;
	y = 1.5;
	cout << "y = " << y << endl
		<< "*i = " << *i << endl;
	*i = 3.5;
	cout << "y = " << y << endl
		<< "*i = " << *i << endl;

	char z;
	char* k = &z;
	z = 'A';
	cout << "z = " << (size_t)z << endl
		<< "*k = " << (size_t)*k << endl;
	*k = 'AB';
	cout << "z = " << (size_t)z << endl
		<< "*k = " << (size_t)*k << endl;
}