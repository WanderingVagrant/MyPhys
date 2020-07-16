#include "Vector.h"

Vector::Vector(float i, float o, float p){
	x = i;
	y = o;
	z = p;
}

void Vector::setX(float i){
	x = i;
}

void Vector::setY(float i){
	y = i;
}

void Vector::setZ(float i){
	z = i;
}

float Vector::getX() const{
	return x;
}

float Vector::getY() const{
	return y;
}

float Vector::getZ() const{
	return z;
}

float Vector::dot(const Vector& h){
	return (h.getX()*getX() + h.getY()*getY() + h.getZ()*getZ());
}

Vector Vector::cross(const Vector& h){
	Vector nu(getY()*h.getZ() - getZ()*h.getY(), getZ()*h.getX()-getX()*h.getZ(),
		       	getX()*h.getY() -getY()-h.getX());
	return nu;
}

Vector Vector::operator+(const Vector& h){
	Vector nu(getX()+h.getX(), getY()+h.getY(), getZ()+h.getZ());
	return nu;
}

Vector Vector::operator-(const Vector& h){
	Vector nu(getX()-h.getX(), getY()-h.getY(), getZ()-h.getX());
	return nu;
}


ostream & operator<<(ostream& stream, const Vector& h){
	return stream << "x=" << h.getX() << ", y=" << h.getY() << ", z=" << h.getZ();
}
