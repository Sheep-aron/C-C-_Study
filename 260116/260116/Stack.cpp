#include "Stack.h"

namespace Sheep
{
	void Stack::Init()
	{
		int n = 4;
		_data = (STDataType*)malloc(sizeof(STDataType) * n);
		if (nullptr == _data)
		{
			std::cerr << "malloc failed!" << std::endl;
			return;
		}
		_size = 0;
		_capacity = n;
	}

	void Stack::Destory()
	{
		if (_data)
		{
			free(_data);
			_size = _capacity = 0;
		}
	}

	void Stack::Push(STDataType x)
	{
		CheckCapacity();
		_data[_size++] = x;
	}

	void Stack::Pop()
	{
		if (Empty())
			return;
		--_size;
	}

	STDataType Stack::Top()
	{
		if (Empty())
		{
			std::cerr << "Top() called on empty stack!" << std::endl;
			return STDataType();
		}
		return _data[_size - 1];
	}

	int Stack::Size()
	{
		return _size;
	}
	bool Stack::Empty()
	{
		return 0 == _size;
	}
}