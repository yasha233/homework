#include<iostream>
#include <vector>
#include<string>
#include <functional>
#include<cassert>
namespace numb1
{

	std::vector<int> map(std::vector<int>& n, std::function<int(int)> func)
	{
		std::vector<int> m;
		for (auto el : n)
		{
			m.push_back(func(el));
		}
		return m;
	}
	int sqr(int x)
	{
		return x * x;
	}
	std::vector<int> filter(std::vector<int> num, std::function<bool(int)> func)
	{
		std::vector<int> h;
		for (auto el : num)
		{
			int k = func(el);
			if (k == 1)
				h.push_back(el);
		}
		return h;
	}
	bool isEven(int y)
	{
		if (y % 2 == 0)
			return true;
		else
			return false;

	}
	
}


namespace funct2
{
	bool isEven(int num)
	{
		return num % 2 == 0;
	}

	void Game()
	{
		int k = 0;
		std::string name;
		std::cout << "Welcome to the Brain Games! May I have your name ? " << std::endl;
		std::cin >> name;
		std::cout << " Hello," << name << "!" << "!Answer 'yes' if the number is even, otherwise answer 'no'." << std::endl;
		while (k != 3)
		{
			int a = rand();
			std::cout << "Question:" << a << std::endl;
			std::string c;

			if (isEven(a))
			{
				c = "yes";
			}
			else
			{
				c = "no";
			}
			std::cout << "Answer:";
			std::string b;
			std::cin >> b;
			if (b == c)
			{
				std::cout << "Correct!" << std::endl;
				k++;
			}
			else
			{
				std::cout << b << " is wrong answer ;(. Let's try again," << name << std::endl;
				k = 0;
			}
		}
		std::cout << "Congratulations, " << name << "!" << std::endl;
	}
	
}
