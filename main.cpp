#include <iostream>
using namespace std;

int sum_range(int first_n, int second_n)
{
	int sum = 0;
	if (first_n > second_n) {
		int temp = first_n;
		first_n = second_n;
		second_n = temp;
	}
	
	for (int i = first_n+1; i < second_n; i++)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	int first_num, second_num;
	cout << "Enter start of range (not in range): ";
	cin >> first_num;
	cout << "Enter end of range (not in range): ";
	cin >> second_num;

	cout << "Sum of range: "
		<< sum_range(first_num, second_num) << endl;
	system("pause");
	return 0;
}