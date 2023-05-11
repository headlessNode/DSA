#include<iostream>

int* passing_array(int size);


int main()
{
	int* ptr_array{};

	ptr_array = passing_array(5);

	//
	*ptr_array = 10;
	*(ptr_array + 1) = 20;
	//
	std::cout << *ptr_array << " " << *(ptr_array + 1) << "\n";

	return 0;
}

int* passing_array(int size) 
{
	int* ptr = new int[size];
	return ptr;
}