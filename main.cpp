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
	if (num <= 0)
	{
		cout << "Error: number is smaller than 1" << endl;
		exit(Error::NEG_num);
	}
}
void is_prime(int a_num) {
	validate_size(a_num);
	if (a_num == 1) {
		cout << "Number is NO prime";
	}
	else {
		bool prime = 1;
		int fact = 1;
		for (int i = 2; i < a_num; i++)
		{
			if (a_num % i == 0) {
				prime = 0;
			}
		}
		(prime == 1) ? cout << "Your number is prime ": cout << "Number is NO prime";
		
	}

}
int main()
{
	int user_num;
	cout << "Enter your number: ";
	cin >> user_num;
	is_prime(user_num);
	cout << endl;
	system("pause");
	return 0;
}