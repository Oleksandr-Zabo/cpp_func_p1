#include <iostream>
using namespace std;
//
void find_idial(int start, int finish) {//6, 28, 496 -idials
	int sum = 0;
	if (start > finish) {
		int temp = start;
		start = finish;
		finish = temp;
	}

	for (int i = start + 1; i < finish; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
			
		}
		if (i == sum) {
			cout << i << " ";
		}
		sum = 0;
		
	}
}


int main()
{
	int first_num, second_num;
	cout << "Enter start of range (not in range): ";
	cin >> first_num;
	cout << "Enter end of range (not in range): ";
	cin >> second_num;

	find_idial(first_num, second_num);

	cout << endl << "The end" << endl;
	system("pause");
	return 0;
}