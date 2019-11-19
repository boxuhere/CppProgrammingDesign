#include "Circle.h"

Circle::Circle() {
	radius = 1.0;
}

Circle::Circle(double radius_) {
	radius = radius_;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

double Circle::getRaidus() const { //const��������һ��������
	return radius;
}

void Circle::setRadius(double radius) {
	this->radius = radius;
}