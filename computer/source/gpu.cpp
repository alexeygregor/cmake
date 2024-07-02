#include "gpu.h"
#include "ram.h"
#include <iostream>
using namespace std;

void display()
{
	int num[8];
	read(num);
	cout << "Ram: ";
	for (int i = 0; i < 8; ++i) cout << num[i] << " ";
	cout << endl;
}