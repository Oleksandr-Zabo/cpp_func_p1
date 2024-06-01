#include <iostream>
using namespace std;
//
enum Error
{
	OK = 0,
	INVALID_height = 99,
	INVALID_lenth = 100,
};
void validate_size(int a_size, int b_size)
{
	if (a_size < 1)
	{
		cout << "Error: lenth is smaller than 1" << endl;
		exit(Error::INVALID_lenth);
	}
	if (b_size < 1)
	{
		cout << "Error: height is smaller than 1" << endl;
		exit(Error::INVALID_height);
	}
}
void rectangle(int a_size, int b_size) {
	validate_size(a_size, b_size);
	for (int i = 0; i < b_size; i++)
	{
		for (int j = 0; j < a_size; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
int main()
{
	int lenth, height;
	cout << "Enter lenth: ";
	cin >> lenth;
	cout << "Enter height: ";
	cin >> height;
	rectangle(lenth, height);
	cout << endl;
	system("pause");
	return 0;
}