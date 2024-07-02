#include "head.h"
#include <iostream>
using namespace std;

double sc(double scalpel[2])
{
	cout << "Scalpel: ";
	for (int i = 0; i < 2; ++i)	cin >> scalpel[i];
	cout << "#Scalpel_";
	for (int i = 0; i < 2; ++i)	cout << scalpel[i] << " ";
	cout << endl;
	return scalpel[2];
}

double he(double hemostat)
{
	cout << "Hemostat: ";
	cin >> hemostat;
	cout << "#Hemostat_" << hemostat << endl;
	return hemostat;
}

double tw(double tweezers)
{
	cout << "Tweezers: ";
	cin >> tweezers;
	cout << "#Tweezers_" << tweezers << endl;
	return tweezers;
}

bool check(bool ch_su, double scalpel[2], double suture[2])
{
	while (!ch_su)
	{
		int j = 0;
		cout << "Suture: ";
		for (int i = 0; i < 2; ++i) cin >> suture[i];
		for (int i = 0; i < 2; ++i)
			if (suture[i] == scalpel[i]) j++;
		if (j == 2) ch_su = true;
		cout << "#Suture_";
		for (int i = 0; i < 2; ++i) cout << suture[i] << " ";
		cout << endl;
	}
	return ch_su;
}