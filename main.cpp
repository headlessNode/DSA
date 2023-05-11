#include<iostream>

int* passing_array(int size); // Function declaration for passing_array


int main()
{
	int* ptr_array{}; // Declare a pointer variable and initialize it to nullptr

	ptr_array = passing_array(5); // Call the passing_array function and assign the returned pointer to ptr_array

	
	*ptr_array = 10; // Assign the value 10 to the first element of the dynamically allocated array
	*(ptr_array + 1) = 20; // Assign the value 20 to the second element of the dynamically allocated array using pointer arithmetic
	
	std::cout << *ptr_array << " " << *(ptr_array + 1) << "\n"; // Print the values of the first and second elements of the array
	
	delete [] ptr_array; // deallocate the memory
	
	return 0;
}

int* passing_array(int size) 
{
	int* ptr = new int[size]; // Dynamically allocate an array of integers with the specified size
	return ptr; // Return the pointer to the dynamically allocated array
}
