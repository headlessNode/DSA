# Arrays

This folder contains two files: `main.cpp` and `nArray.h`. The files are part of a C++ program that demonstrates various operations on an array using a custom class called `nArray`.

## Files

- `main.cpp`: This file contains the main function of the program. It provides a menu-driven interface for performing operations on an array using the `nArray` class.
- `nArray.h`: This header file contains the implementation of the `nArray` class. It defines various member functions to perform operations such as adding elements, searching, inserting, deleting, and manipulating the array.

## Functionality

The `nArray` class provides the following functionality:

- `T* create()`: Creates a dynamic array of type `T` based on user input and initializes all elements to 0.

- `void Add()`: Allows the user to add elements to the array. Prompts the user to enter the number of elements to add and then prompts for each element individually.

- `void display()`: Displays the elements of the array.

- `void Append(T n)`: Appends an element `n` to the end of the array if there is space available.

- `void insert(T n, int index)`: Inserts an element `n` at the specified `index` in the array. Shifts the existing elements to the right to make room for the new element.

- `void del(int index)`: Deletes the element at the specified `index` from the array. Shifts the remaining elements to the left to fill the gap.

- `void linear_search(T n)`: Performs a linear search to find the first occurrence of element `n` in the array. Prints the index if the element is found, otherwise prints a message indicating that the element doesn't exist.

- `void binary_search(T n)`: Performs a binary search to find the element `n` in a sorted array. Assumes that the array is sorted in ascending order. Prints the index if the element is found, otherwise keeps dividing the search space in half until the element is found or the search space is exhausted.

- `T Get(int index)`: Returns the element at the specified `index` in the array.

- `void Set(int index, T n)`: Sets the element at the specified `index` in the array to the value `n`.

- `int max()`: Finds the maximum element in the array and returns it.

- `int sum()`: Calculates the sum of all elements in the array and returns it.

- `float avg()`: Calculates the average of all elements in the array and returns it.

- `void reverse()`: Reverses the order of elements in the array.

- `void rotate()`: Performs a left shift operation on the array, where the first element becomes the last element.

## Usage

To use the program, compile the `main.cpp` file along with the `nArray.h` header file. Make sure that the necessary C++ compiler and build environment are set up.

Upon running the compiled executable, a menu will be displayed with various options to perform operations on the array. Enter the desired operation by selecting the corresponding index from the menu.

Follow the on-screen prompts to provide input for specific operations such as adding elements, searching, inserting, deleting, and rotating the array.

## Contributing

Contributions to this project are welcome. If you find any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.


