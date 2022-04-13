#include <iostream>
#include <string>
using namespace std;

bool is_palindrome_number(int actual_number)
{
	string number_to_check = to_string(actual_number);
	unsigned short position = 0;
	for (position = 0; position < number_to_check.length() / 2; position++)
	{
		if (number_to_check[position] != number_to_check[number_to_check.length() - position - 1])
		{
			return false;
		}
	}
	return true;
}

void seek_palindrome_number(int number)
{
	int next_number = number+1;

	for (next_number;next_number<=1000000; next_number++)
	{
		if (is_palindrome_number(next_number) == true)
		{
			cout << next_number << endl;
			break;
		}
	}
}

int main()
{
	unsigned short how_many_use = 0;
	int number = 0;

	cout << "Write how many time you would to use this program: ";
	cin >> how_many_use;

	for (how_many_use; how_many_use > 0; how_many_use--)
	{
		cout << "Write number which you want to check: ";
		cin >> number;
		seek_palindrome_number(number);
	}
	return 0;
}