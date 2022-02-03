#pragma once
#include <iostream>

namespace unit2 
{
	void ex1()
	{
		std::cout << "Ivan Drago, Russia, Moscow Kremlin" << std::endl;
	}

	void ex2()
	{
		int val;
		std::cout << "Pls enter the number of furlongs: "; 
		std::cin >> val;
		val = val * 220;
		std::cout << "Yards: " << val << std::endl;
	}

	void ex3p1()
	{
		std::cout << "Three blind mice" << std::endl;
	}

	void ex3p2()
	{
		std::cout << "See how they run" << std::endl;
	}
}