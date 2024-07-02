#include "ram.h"
#include <iostream>
using namespace std;

int buf[8];

void write(int num[8])
{
	for (int i = 0; i < 8; ++i) buf[i] = num[i];
}

int read(int num[8])
{
	for (int i = 0; i < 8; ++i) num[i] = buf[i];
	return num[8];
}