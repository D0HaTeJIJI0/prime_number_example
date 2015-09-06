#include <iostream>
using namespace std;

bool isNumberPrime(int number)
{
	bool primeFlag = true;
	for (int i = 3; i * i <= number; i++)
	{
		if (number % i == 0)
		{
			primeFlag = false;
			break;
		}
	}
	return primeFlag;
}

int main()
{
    int n;
    cin >> n;
    if (isNumberPrime(n))
    {
	    cout << n << " is prime" << endl;
    }
	else
	{
		cout << n << " is composite" << endl;
	}
	return 0;
}