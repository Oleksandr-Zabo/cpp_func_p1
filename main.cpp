#include <iostream>
using namespace std;
//

void cube(int a_num) {
	cout << "Cube of your number = " << a_num * a_num * a_num;

}
int main()
{
	int user_num;
	cout << "Enter your number: ";
	cin >> user_num;
	cube(user_num);
	cout << endl;
	system("pause");
	return 0;
}