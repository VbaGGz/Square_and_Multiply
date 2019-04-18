#include <iostream>
using namespace std;
long long S_and_M(long long base, long long exponent, int modulus)
{
	long long result = 1;
	while (exponent > 0)
	{
		if (exponent % 2 == 1) {
			result = (result * base) % modulus;
		}
		exponent = exponent >> 1;
		base = (base * base) % modulus;
	}
	return result;
}
int main()
{

	while (1==1)
	{
		long long x, y;
		int mod;
		cout << "Form : X^e mod n \n";
		cout << "Enter base Value ('X') : ";
		cin >> x;
		cout << "Enter exponent ('e') : ";
		cin >> y;
		cout << "Enter Modular Value ('n') : ";
		cin >> mod;
		cout << S_and_M(x, y, mod) << endl;
	}
	return 0;
}