#include <iostream>

#include <vector>

int main()
{
	std::vector<int> v(10, 1); // Initialize a vector of size 10 with all elements set to 1
	int sum = 0;
	for (int i = 0; i < v.size(); ++i) {
		sum += v[i]; // Sum all elements in the vector
	}
	std::cout << "Sum of elements: " << sum << std::endl; // Output the sum
	// Return 0 to indicate successful execution
	return 0;
}