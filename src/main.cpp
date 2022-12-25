#include <iostream>

template < typename T >
void input(T* array)
{
	T value = 0;
	std::cout << "Fill the array (8):";
	for (int i = 0; i < 8; ++i)
	{
		std::cin >> value;
		array[i] = value;
	}
}

template < typename T >
T avg(T* array)
{
	T avg = 0;
	for (int i = 0; i < 8; ++i)
	{
		avg += array[i];
	}
	return avg/8;
}

int main()
{
	int array_int[8];
	input(array_int);
	std::cout << "AVG = " << avg(array_int) << std::endl;

	double array_double[8];
	input(array_double);
	std::cout <<  "AVG = "  << avg(array_double) << std::endl;

	
	return 0;
}
