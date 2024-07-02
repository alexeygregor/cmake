#include "kbd.h"
#include "ram.h"
#include <limits>
#include <numeric>
#include <iostream>
using namespace std;

void input()
{
	int num[8]{}; int i = 0;
	cout << "Enter numbers: " << endl;
	while (i < 8)
	{
		int j = 0;
		cin >> j;
		if (cin.fail() || cin.peek() != '\n')
		{
			cerr << "Error.Try again \n";
			cin.clear();
			cin.ignore(numeric_limits < streamsize > ::max(), '\n');
		}
		else
		{
			num[i] = j;
			++i;
		}
	}
	write(num);
}