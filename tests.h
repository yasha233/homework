#include"function.h"
namespace numb1{
void test() {
	assert(sqr(3) == 9);
	assert(isEven(4) == true);
	std::cout << "test ok" << std::endl;
}
void test2(){
	std::vector<int> k={4,8};
	std::vector<int> l={1,4,16};
	std::vector<int> h={3,5,4,8};
	std::vector<int> n={1,2,4};
	assert(filter( h,isEven )==k);
	assert(map(n,sqr)==l);
	std::cout << "test filter & map ok" << std::endl;
}
namespace funct2{
void testIsEven() {
	assert(isEven(4) == true);
	assert(isEven(5) == false);
	assert(isEven(0) == true);
	assert(isEven(13) == false);
	std::cout << "isEven ok" << std::endl;
}
}
