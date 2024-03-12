#include"function.h"
namespace numb1{
void test() {
	assert(numb1::sqr(3) == 9);
	assert(numb1::isEven(4) == true);
	std::cout << "test ok" << std::endl;
}
}
namespace funct2{
void testIsEven() {
	assert(funct2::isEven(4) == true);
	assert(funct2::isEven(5) == false);
	assert(funct2::isEven(0) == true);
	assert(funct2::isEven(13) == false);
	std::cout << "isEven ok" << std::endl;
}
}
