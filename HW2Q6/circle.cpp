#include "shape.h"
#include "circle.h"
#include <iostream>
using namespace std;
circle::circle(int nx, int ny, int nr): shape(nx,ny){
	setr(nr);
}
int circle::getr(){
	return r;
}
void circle::setr(int nr){
	r = nr;
}
void circle::draw(){
	cout << "Here is a Circle at location: (" << getx() << ", " << gety() << ")" << "the radius is " << getr() << endl; 
}