#include <iostream>
using namespace std;
//

int cube(int a_num) {
	int cube = a_num * a_num * a_num;
	return cube;
}
int main()
{
	int user_num;
	cout << "Enter your number: ";
	cin >> user_num;
	int cube_num = cube(user_num);
	cout << "Cube of your number = " << cube_num;
	cout << endl;
	system("pause");
	return 0;
}