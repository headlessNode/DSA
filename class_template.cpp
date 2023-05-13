#include<iostream>

template <class T>
class Arithematic {
private:
	T value1;
	T value2;
public:
	Arithematic(T a, T b);
	T add();
	T subtract();
};

template<class T>
Arithematic<T>::Arithematic(T a, T b) {
	value1 = a;
	value2 = b;
}

template<class T>
T Arithematic<T>::add() {
	T c = value1 + value2;
	return c;
}

template<class T>
T Arithematic<T>::subtract() {
	T c = value1 - value2;
	return c;
}

int main() {
	Arithematic<int> one(5, 1);
	std::cout << one.add() << "\n";
	std::cout << one.subtract() << "\n";
	Arithematic<double> two(5.21, 1.10);
	std::cout << two.add() << "\n";
	std::cout << two.subtract() << "\n";

}


