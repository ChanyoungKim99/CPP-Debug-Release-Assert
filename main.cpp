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
	// ���� �ƴ� ��, ����(assert)�ع��� ���α׷��� �׿����� 
	// ��, Release������ �۵��� �� �Ѵ�!
	// ���� Debug��� ������ �� �� �ִ� ���� ���
	
	// ���� Release�� �ƴ�, Debug ��带 ����ϴ� ���ӵ鵵 �־
	// �츮�� ������ �ϴ� ������ ��쵵 �ִ�!

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