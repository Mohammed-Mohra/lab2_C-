#include "Class.h"
#include <iostream>
using namespace std;

rectangle::rectangle(float a, float b) {
	if (a < 0 || b < 0) {
		cout << "Enter positive values please" << endl;
	}
	else {
		HEIGHT = a;
		if (b == 0)
			b = a;
		WIDTH = b;
	}

}
float rectangle::perimeter() {
	if (HEIGHT < 0 || WIDTH < 0) {
		cout << "returned -1 cause you entered negative values";
		return -1;
	}
	else {

		float perimeter = 2 * (HEIGHT + WIDTH);
		return perimeter;
	}
}

float rectangle::area() {
	if (HEIGHT < 0 || WIDTH < 0) {
		cout << "returned -1 cause you entered negative values" << endl;
		return -1;
	}
	else {
		float area = HEIGHT * WIDTH;
		return area;
	}
}
void rectangle::print_sides() {
	if (HEIGHT < 0 || WIDTH < 0)
		cout << "Cant print the sides it cause negative values" << endl;
	else
		cout << "Height is :" << HEIGHT << endl << "Width is:" << WIDTH << endl;
}
void rectangle::info() {
	if (HEIGHT < 0 || WIDTH < 0)
		cout << "Cant print anything cause you entered negative values" << endl;
	else
		cout << "Height is :" << HEIGHT << endl << "Width is:" << WIDTH << endl << "Area is" << area() << endl << "Perimeter is :" << perimeter() << endl;

}


