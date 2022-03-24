#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2)
{
	cout << "T Add(T num1, T num2)" << endl;
	return num1 + num2;
}

int Add(int num1, int num2)
{
	cout << "int Add(int num1, int num2)" << endl;
	return num1 + num2;

}

double Add(double num1, double num2)
{
	cout << "double Add(double num1, double num2)" << endl;
	return num1 + num2;
}

int main(void)
{
	cout << Add<unsigned int>(15, 20) << endl;
	cout << Add<double>(2.9, 3.7) << endl;
	cout << Add<int>(3.2, 3.2) << endl;
	cout << Add(3.2, 3.2) << endl;
	cout << Add(5, 2) << endl;

	return 0;
}