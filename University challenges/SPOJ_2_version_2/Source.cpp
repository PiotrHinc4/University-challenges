#include <iostream>
#include <math.h>
using namespace std;

void prime_numbers(int first_number, int last_number)
{
	int range_size = last_number - first_number;
	int range[1000];
	int actual_number = 2;


	for (int indeks = 0; indeks <= last_number; indeks++)
	{
		range[indeks] = indeks;
	}

	// I use hier sieve of Eratosthenes
	for (int indeks = 2; indeks <= sqrt(last_number); indeks++)
	{
		for (int indeks2 = indeks; indeks2 <= last_number; indeks2++)
		{
			if (indeks2 != actual_number && indeks2 % actual_number == 0)
			{
				range[indeks2] = 0;
			}
		}
		actual_number++;
	}

	for (int indeks = 0; indeks <= last_number; indeks++)
	{
		if (range[indeks]>1&&range[indeks]>=first_number)
		{
			cout << range[indeks] << "\n";
		}
	}
}

int main()
{
	unsigned short how_many_times_to_use = 0;
	unsigned int first_number = 0;
	unsigned int last_number = 0;

	cout << "Write how many times to look for prime numbers in the range: ";
	cin >> how_many_times_to_use;
	for (how_many_times_to_use; how_many_times_to_use>0; how_many_times_to_use--)
	{
		cout << "Enter numbers in the range: ";
		cin >> first_number >> last_number;
		prime_numbers(first_number, last_number);
	}

	return 0;
}