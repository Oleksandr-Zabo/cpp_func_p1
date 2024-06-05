#include <iostream>
using namespace std;
//
bool is_lucky_num(int number) {
	int sum_1 = 0, sum_2 = 0;
	for (int i = 0; i < 3; i++)
	{
		sum_1 += number % 10;
		number /= 10;
	}
	for (int i = 0; i < 3; i++)
	{
		sum_2 += number % 10;
		number /= 10;
	}
	if (sum_1 == sum_2) {
		return 1;
	}
	else {
		return 0;
	}
}
int main()
{
	int user_num;
	do
	{
		cout << "Enter your number: ";
		cin >> user_num;
	} while (user_num > 999999 || user_num < 100000);
	
	if (is_lucky_num(user_num)) {
		cout << "Your number is lucky" << endl;
	}
	else {
		cout << "Your number is not lucky" << endl;
	}
	system("pause");
	return 0;
}