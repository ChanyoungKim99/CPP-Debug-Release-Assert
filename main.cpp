#include <iostream>
#include <cassert>

double Divide(double a, double b)
{
	if (b == 0)
	{
		throw std::logic_error("Divide by Zero!");
	}
	return a / b;
}

int main()
{
	double x;
	double y;

	std::cin >> x >> y;

	assert(y != 0);
	// 참이 아닐 시, 단정(assert)해버려 프로그램을 죽여버림 
	// 단, Release에서는 작동을 안 한다!
	// 오직 Debug모드 에서만 쓸 수 있는 좋은 기능
	
	// 가끔 Release가 아닌, Debug 모드를 출시하는 게임들도 있어서
	// 우리가 게임을 하다 만나는 경우도 있다!

	try
	{
		std::cout << Divide(x, y) << std::endl;

		double mine = Divide(x, y);
		mine = mine * mine;
	}
	catch (std::logic_error)
	{
		std::cout << "Divide By Zero!!" << std::endl;
	}

	return 0;
}