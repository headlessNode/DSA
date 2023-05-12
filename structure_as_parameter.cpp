#include<iostream>

struct Rectangle {
	double length;
	double width;
};
// Function to calculate the area of a rectangle
double calc_area(Rectangle* ptr_rec) {
	return (*ptr_rec).length * (*ptr_rec).width;
}
// Function to change the length of a rectangle
void change_length(Rectangle* ptr_rec) {
	(*ptr_rec).length = 2.1;
}
// Function to change the width of a rectangle
void change_width(Rectangle* ptr_rec) {
	(*ptr_rec).width = 3.2;
}

int main() {

	Rectangle r1{5.1,10.3};// Creating a rectangle object with length 5.1 and width 10.3
	double area{};
	area = calc_area(&r1);// Calculating the area of the rectangle r1
	change_length(&r1);// Changing the length of the rectangle r1
	change_width(&r1);// Changing the width of the rectangle r1
	area = calc_area(&r1);
}
