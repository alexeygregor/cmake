#include "cpu.h"
#include "ram.h"
#include <iostream>
using namespace std;

void compute()
{
	int num[8], sum = 0;
	read(num);
	for (int i = 0; i < 8; ++i) sum += num[i];
	cout << "Sum: " << sum << endl;
}