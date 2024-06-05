#include <iostream>
using namespace std;
//
void find_idial(int first_n, int second_n) {
	int sum = 0;
	if (first_n > second_n) {
		int temp = first_n;
		first_n = second_n;
		second_n = temp;
	}

	for (int i = first_n + 1; i < second_n; i++)
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

	cout << "The end" << endl;
	system("pause");
	return 0;
}