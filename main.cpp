#include <iostream>
using namespace std;
//
double my_pow(double x, int x_pow) {
	int choise = 0;
	double result = 1;
	if (x_pow > 0)
	{
		choise = 1;
	}
	else if (x_pow < 0)
	{
		choise = 2;
		x_pow *= -1;
	}
	for (int i = 1; i <= x_pow; i++)
	{
		result *= x;
	}
	switch (choise)
	{
	case 0: {
		return 1;
	}break;

	case 1: {
		return result;
	}break;

	case 2: {
		return 1 / result;
	}break;
	}
}


int main()
{
	double user_num;
	cout << "Enter your number: ";
	cin >> user_num;

	int num_pow;
	cout << "Enter pow of number: ";
	cin >> num_pow;

	cout << user_num
		<< " ^ " << num_pow << " = "
		<< my_pow(user_num, num_pow) << endl;
	system("pause");
	return 0;
}