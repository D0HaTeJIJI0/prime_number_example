#include <iostream>
using namespace std;
//Excess comment
bool isNumberPrime(int number)
{
	bool primeFlag = true;
	for (int i = 2; i * i <= number; i++)
	{
		if (number % i == 0)
		{
			primeFlag = false;
			break;
		}
	}
	return primeFlag;
}

void assert(bool test, int number)
{
	bool result = isNumberPrime(number);
	if (test == result)
	{
		cout << "OK" << endl;
	}
	else
	{
		cout << "FAIL; " << number << endl;
	}
}

int main()
{
	assert(true, 11);
	assert(true, 37);
	assert(false, 27339979);
	assert(true, 18181);
	assert(false, 4);
	return 0;
}
