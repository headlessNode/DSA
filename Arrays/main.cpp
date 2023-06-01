#include<iostream>
#include"nArray.h"

/*
	some conditions need to be added to avoid std out of range error.
	In insert and del function.

*/


int main() {

	nArray<int> a;
	a.length = 0;
	int* p = a.create();

	std::cout << "Array created" << "\n";

	int choice;

	

	do {
		
		std::cout << "********Array operations Menu********" << "\n";
		std::cout << "1 - Add elements to the Array" << "\n";
		std::cout << "2 - Display Array" << "\n";
		std::cout << "3 - Append element" << "\n";
		std::cout << "4 - Insert at index" << "\n";
		std::cout << "5 - Delete element at index" << "\n";
		std::cout << "6 - Search element (linear Search)" << "\n";
		std::cout << "7 - Search element (Binary Search)" << "\n";
		std::cout << "8 - Get element from index" << "\n";
		std::cout << "9 - Get greatest number" << "\n";
		std::cout << "10 - Get sum of elements in the Array" << "\n";
		std::cout << "11 - Reverse the Array" << "\n";
		std::cout << "12 - Rotate/Left shift Array" << "\n";
		std::cout << "0 - Exit" << "\n";
		std::cout << "*******************************************" << "\n";
		std::cout << "Enter the index of the operation you want to perform: ";
		std::cin >> choice;
		
		if (choice == 1) {
			a.Add();
		}
		else if (choice == 2) {
			a.display();
		}
		else if (choice == 3) {
			int n{};
			std::cout << "Enter the element to append: ";
			std::cin >> n;
			a.Append(n);
		}
		else if (choice == 4) {
			int n, i;
			std::cout << "Enter the element followed by its index: ";
			std::cin >> n >> i;
			a.insert(n, i);
		}
		if (choice == 5) {
			std::cout << "Enter the index of the element to delete: ";
			int i;
			std::cin >> i;
			a.del(i);
		}
		else if (choice == 6) {
			std::cout << "Enter the element you want to search: ";
			int n;
			std::cin >> n;
			a.linear_search(n);
		}
		else if (choice == 7) {
			std::cout << "Enter the element you want to search: ";
			int n;
			std::cin >> n;
			a.binary_search(n);
		}
		else if (choice == 8) {
			int i;
			std::cout << "Enter the index: ";
			std::cin >> i;
			a.Get(i);
		}
		else if (choice == 9) {
			int max = a.max();
			std::cout << "Greatest element in the Array: " << max<<"\n";
		}
		else if (choice == 10) {
			int s = a.sum();
			std::cout << "Sum of elements in the Array: " << s << "\n";
		}
		else if (choice == 11) {
			a.reverse();
		}
		else if (choice == 12) {
			a.rotate();
		}

		else if (choice == 0) {
			break;
		}
	} while (choice != 0);
	

	delete[]p;
	return 0;
	
}