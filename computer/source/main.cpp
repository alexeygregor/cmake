#include "kbd.h"
#include "gpu.h"
#include "cpu.h"
#include "disk.h"
//#include "ram.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string command;
	while (true)
	{
		cout << "Enter command: ";
		cin >> command;
		if (command == "exit") break;
		if (command == "input") input();
		if (command == "display") display();
		if (command == "sum") compute();
		if (command == "save") save();
		if (command == "load") load();
	}
}
