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
bool bigger_zero(int a_num) {
	validate_num(a_num);
	bool b_num;
	(a_num < 0) ? b_num = 0 : b_num = 1;
	return b_num;

}
int main()
{
	int user_num;
	cout << "Enter your number: ";
	cin >> user_num;
	cout << bigger_zero(user_num) << endl;
	system("pause");
	return Error::OK;
}