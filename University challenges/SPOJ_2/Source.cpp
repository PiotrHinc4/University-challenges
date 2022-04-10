#include <iostream>
using namespace std;

bool is_prime_number(int number)
{
	int next_numbers = 2;
	for (next_numbers; next_numbers < number; next_numbers++)
	{
		if (number % next_numbers == 0)
			return false;
	}
	return true;
}

void prime_numbers(int first_number, int second_number)
{
	for (first_number; first_number <= second_number; first_number++)
	{
		if (first_number > 1 || first_number>second_number/2)
		{
			if (is_prime_number(first_number) == true)
			{
				cout << first_number << "\n";
			}
		}
	}
	cout << "\n";
}


int main()
{
	int lines = 0;
	int first_number = 0;
	int second_number = 0;

	cout << "How many pairs of numbers do you have to check: ";
	cin >> lines;

	for (lines; lines > 0; lines--)
	{
		cout << "Take a pairs of numbers: ";
		cin >> first_number >> second_number;
		prime_numbers(first_number, second_number);
		
	}
	return 0;
}