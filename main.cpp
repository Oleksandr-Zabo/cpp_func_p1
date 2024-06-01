#include <iostream>
using namespace std;
//

void max_num(int a_num, int b_num) {
	if (a_num == b_num) {
		cout << "Numbers equal!";
	}
	else {
		(a_num>b_num)? cout << "Number 1 is bigger": cout << "Number 2 is bigger";
	}
	
}
int main()
{
	int user_num_1, user_num_2;
	cout << "Enter your number 1: ";
	cin >> user_num_1;
	cout << "Enter your number 2: ";
	cin >> user_num_2;
	max_num(user_num_1, user_num_2);
	cout << endl;
	system("pause");
	return 0;
}