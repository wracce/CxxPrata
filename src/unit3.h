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

	void ex2()
	{
		double h;
		double w;
		const int LbToKg = 2.2;
		cout << "Write your height in m:___\b\b\b"; cin >> h;
		cout << "Write your weight in kg:___\b\b\b"; cin >> w;
		cout << "Your BMI is " << w/(h*h) << endl;

	}

	void ex3()
	{
		double deg, min, sec, toDeg;
		cout << "Enter a Latitude in degrees, minutes, and seconds:\n";
		cout << "First, enter the degrees: "; cin >> deg;
		cout << "Next, enter the minutes of arc: "; cin >> min;
		cout << "Finally, enter the seconds of arc: "; cin >> sec;
		toDeg = deg + (min+sec/60 )/ 60;
		cout << deg <<" degrees, " << min << " minutes, " << sec << " seconds = " << toDeg << " degrees";

	}
}