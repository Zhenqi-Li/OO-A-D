#include "shape.h"
#include "triangle.h"
#include <iostream>
using namespace std;
triangle::triangle(int nx, int ny, int na, int nb, int nc):shape(nx, ny){
	settriangle(na, nb, nc);
}
int triangle::geta(){
	return a;
}
int triangle::getb(){
	return b;
}
int triangle::getc(){
	return c;
}
void triangle::settriangle(int na, int nb, int nc){
	a = na;
	b = nb;
	c = nc;
}
void triangle::draw(){
	cout << "Here is a Triangle at location: (" << getx() << ", " << gety() << ")" << "the three sides are " << geta() << ", " << getb() << "," << getc() << endl;
}