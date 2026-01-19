#include "Stack.h"

int main()
{
	Sheep::Stack st;
	st.Init();
	std::cout << st.Size() << std::endl;
	for (int i = 0; i < 10; ++i)
		st.Push(i);
	std::cout << st.Size() << std::endl;
	std::cout << st.Top() << std::endl;
	st.Pop();
	std::cout << st.Size() << std::endl;
	std::cout << st.Top() << std::endl;

	return 0;
}