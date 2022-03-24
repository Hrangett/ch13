#include<iostream>
using namespace std;

template<typename A>
A Add(A num1, A num2)
{
	return num1 + num2;
}

template<typename A>
A Min(A num1, A num2)
{
	//if (num1 > num2)
	return num1 - num2;
	//return num2 - num1;

}

template<typename A>
A Mul(A num1, A num2)
{
	return num1 * num2;
}

template<typename A>
A Div(A num1, A num2)
{
	return num1 / num2;
}

int main()
{
	cout << Min(Add(3.14, 1.5), 5.5);
}