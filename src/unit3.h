#pragma once
#include <iostream>
using namespace std;

namespace unit3
{
	void ex1()
	{
		int h;
		const int feet = 12;
		cout << "Write your height:___\b\b\b"; cin >> h;
		cout << "Your height is " << h/feet << " feet and " << h%feet << " inch!" << endl;
	}
}