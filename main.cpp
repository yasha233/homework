#include"Header.h"

int main()
{
	setlocale(LC_ALL, "ru");
	std::vector<int> h = { 3,5,4,8 };
	auto results = numb1::filter(h, numb1::isEven);
	std::cout << "Результаты проверки на четность: ";
	for (auto res : results)
	{
		std::cout << res << " ";
	}
	std::cout << std::endl;
	numb1::test();

	std::vector<int> n = {1,2,4};
	auto results2 = numb1::map(n,numb1::sqr);
	std::cout << "Результаты возведения в степень 2: ";
	for (auto res : results2)
	{
		std::cout << res << " ";
	}
	std::cout << std::endl;
funct2::Game();
funct2::testIsEven();
return 0;
}