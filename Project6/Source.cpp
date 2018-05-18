#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <memory>
#include "Stack.h"




void main()
{
	Stack <int> a(std::initializer_list<int> {10,21,1});
	a.push(6);
	a.pop();
	a.peek();
	for (int i = 0; i <= a.count(); i++)
	{
	std::cout << a.data[i] << std::endl;
	}
	std::cout << a.count();
	a.count();
	std::cout << std::endl;
	std::cout << a.CheckStackFull() << std::endl;
	std::cout << a.CheckStackEmpty();
	system("pause");
}