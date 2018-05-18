#pragma once
#include <initializer_list>
template <class T>
class Stack
{
	
	size_t size, top;
public:
	T * data;
	size_t getTop() const
	{
		return top;
	}
	size_t getSize() const
	{
		return size;
	}

	Stack(int size)
	{
		size = 1, top = 0;
		data = new type[size];
		data[0] = 0;
	}
	~Stack()
	{
		delete[] data;
	}
	Stack(std::initializer_list<T> & elements)
	{
		for (auto & element : elements) {
			this->push(element);
		}
	}
	bool CheckStackFull()
	{
		if (data[size - 1] != NULL)
		{
			return true;
		}
		else return false;
	}
	bool CheckStackEmpty()
	{
		if (data == nullptr)
		{
			return true;
		}
		else return false;
	}
	void push(const T & element)
	{
		if (nullptr == data)
		{
			data = new T[++size];
			data[0] = element;
		}
		else
		{
			data = (T*)realloc(data, ++size * sizeof(T));
			data[size - 1] = element;
		}
	}
	void pop()
	{
		if (nullptr != data)
		{
			int new_size = size;
			std::cout << data[--new_size] << std::endl;
			data = (T*)realloc(data, --size * sizeof(T));
		}
	}

	void peek()
	{
		if (nullptr != data)
		{
			std::cout << data[--size] << std::endl;

		}
	}
	size_t count() const
	{
		return size;
	}
	void clear()
	{
		delete[] data;
	}
};