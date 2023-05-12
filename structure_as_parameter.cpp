#include<iostream>

struct Rectangle {
	double length;
	double width;
};

double calc_area(Rectangle* ptr_rec) {
	return (*ptr_rec).length * (*ptr_rec).width;
}

void change_length(Rectangle* ptr_rec) {
	(*ptr_rec).length = 2.1;
}

void change_width(Rectangle* ptr_rec) {
	(*ptr_rec).width = 3.2;
}

int main() {

	Rectangle r1{5.1,10.3};
	double area{};
	area = calc_area(&r1);
	change_length(&r1);
	change_width(&r1);
	area = calc_area(&r1);
}