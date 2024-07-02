#include <string>
#include <iostream>
#include "head.h"
using namespace std;

int main()
{
	string command;
	bool ch_sc = false, ch_su = false;
	double scalpel[2]; double hemostat{}; double tweezers{}; double suture[2];
	while (!ch_su)
	{
		cout << "Insert command: ";
		cin >> command;
		if (command == "exit") ch_su = true;
		if (command == "scalpel")
		{
			sc(scalpel);
			ch_sc = true;
		}
		if (ch_sc)
		{
			if (command == "hemostat")
				hemostat = he(hemostat);
			if (command == "tweezers")
				tweezers = tw(tweezers);
			if (command == "suture")
				ch_su = check(ch_su, scalpel, suture);
		}
	}
	cout << "Operation done!" << endl;
}
