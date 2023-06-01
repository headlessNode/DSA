#pragma once


template<class T>
class nArray
{
private:
	//
	T* p;
	int size;
	
public:
	int length;
	T* create() {
		std::cout << "Enter the size of array: ";
		std::cin >> size;
		p = new T[size];
		for (int i = 0; i < size; i++) {
			*(p + i) = 0;
		}
		return p;
	}

	void Add() {
		T n;
		std::cout << "Enter the number of elements you want to add: ";
		std::cin >> length;
		for (int i = 0; i < length; i++) {
			std::cout << "Element at index " << i << " : ";
			std::cin >> n;
			*(p + i) = n;
		}
	}

	void display() {
		std::cout << "Array: [ ";
		for (int i = 0; i < size; i++) {
			std::cout << *(p + i) << " ";
		}
		std::cout << "]" << "\n";
	}

	void Append(T n) {
		if (length == size) {
			std::cout << "There is no space in the Array." << "\n";
		}
		else {
			*(p + length) = n;
			length++;
		}
		
	}

	void insert(T n, int index) {
		if (index <= length) {
			for (int i = length; i > index; i--) {
				*(p + i) = *(p + (i - 1));
			}
			*(p + index) = n;
			length++;
		}
	}

	void del(int index) {
		for (int i = index; i <= length-1; i++) {
			*(p + i) = *(p + i + 1);
		}
		length--;
	}

	void linear_search(T n) {
		for (int i = 0; i < length; i++) {
			if (n == *(p + i)) {
				std::cout << n << " found at index " << i << "\n";
				return;
			}
		}
		std::cout << n << " doesn't exist" << "\n";
	}

	void binary_search(T n) {

		
		int highest_index = length - 1;
		int lowest_index = 0;

		bool found = false;

		while (found != true) {
			int half = (highest_index + lowest_index) / 2;

			if (n == *(p + half)) {
				std::cout << n << " found at index " << half << "\n";
				found = true;
			}
			else if (n > *(p + half)) {
				lowest_index = half + 1;
			}
			else if (n < *(p + half)) {
				highest_index = half - 1;
			}
		}
	}

	T Get(int index) {
		if (index >= 0 && index <= length){ 
			return *(p + index); 
		}
		else {
			std::cout << "Invalid index" << "\n";
		}
	}

	void Set(int index, T n) {
		if (index >= 0 && index <= length) {
			*(p + index) = n;
		}
		else {
			std::cout << "Invalid index" << "\n";
		}
	}

	int max() {
		int max = *(p + 0);
		for (int i = 1; i < length; i++) {
			if (max < *(p + i)) {
				max = *(p + i);
			}
		}
		return max;
	}

	int sum() {
		int s{};
		for (int i = 0; i < length; i++) {
			
			s += *(p + i);
		}
		return s;
	}

	float avg() {
		float s;
		for (int i = 0; i < length; i++) {
			
			s += *(p + i);
		}
		return s/ (float)length;
	}

	void reverse() {
		for (int i = 0, j = length - 1; i <= j; i++, j--) {
			T temp = *(p + i);
			*(p + i) = *(p + j);
			*(p + j) = temp;
		}
	}

	void rotate() {

		T temp = *(p + 0);
		for (int i = 0, j = 1; j < length; i++, j++) {
			*(p + i) = *(p + j);
		}
		*(p + (length - 1)) = temp;
	}

};
