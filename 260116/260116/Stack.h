#pragma once

#include <iostream>

namespace Sheep
{
	typedef int STDataType;
	class Stack
	{
	public:
		void Init();
		void Destory();
		void Push(STDataType x);
		void Pop();
		STDataType Top();
		int Size();
		bool Empty();
	private:
		void CheckCapacity()
		{
			if (_size == _capacity)
			{
				STDataType newcapacity = (0 == _capacity) ? 4 : _capacity * 2;
				STDataType* tmp = (STDataType*)realloc(_data, sizeof(STDataType) * newcapacity);
				if (nullptr == tmp)
				{
					std::cerr << "realloc failed!" << std::endl;
					return;
				}
				_data = tmp;
				_capacity = newcapacity;
			}
		}

		STDataType* _data;
		STDataType _size;
		STDataType _capacity;
	};
}

