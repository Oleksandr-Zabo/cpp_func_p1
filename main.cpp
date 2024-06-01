#include <iostream>
using namespace std;
//
enum Error
{
	OK = 0,
	NEG_num = 99,
};
void validate_size(int num)
{
	if (num < 0)
	{
		cout << "Error: number is smaller than 0" << endl;
		exit(Error::NEG_num);
	}
}
void factorial(int a_num) {
	validate_size(a_num);
	if (a_num == 0) {
		cout << 0;
	}
	else {
		int fact = 1;
		for (int i = 1; i <= a_num; i++)
		{
			fact *= i;
		}
		cout << fact;
	}
	
}
int main()
{
	int user_num;
	cout << "Enter your number: ";
	cin >> user_num;
	factorial(user_num);
	cout << endl;
	system("pause");
	return Error::OK;
}