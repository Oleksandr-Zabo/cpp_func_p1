#include <iostream>
using namespace std;
enum Error
{
	OK = 1,
	zero_num = 0
};
void validate_num(int num)
{
	if (num == 0)
	{
		cout << "Error: number is equal 0" << endl;
		exit(Error::zero_num);
	}
}
void factorial(int a_num) {
	validate_num(a_num);
	(a_num < 0) ? cout << "Number is smaler than 0" : cout << "Number is bigger than 0";

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