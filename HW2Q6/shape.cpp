#include "shape.h"
#include <iostream>
using namespace std;
shape::shape(int nx, int ny){
	location(nx, ny);
}

int shape::getx(){
	return x;
}
int shape::gety(){
	return y;
}
void shape::setx(int nx){
	x = nx;
}
void shape::sety(int ny){
	y = ny;
}
void shape::location(int nx, int ny){
	setx(nx);
	sety(ny);
}
void shape::draw(){cout << "sss";}