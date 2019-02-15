#include "shape.h"
#include "squares.h"
#include <iostream>
using namespace std;
square::square(int nx, int ny, int na): shape(nx, ny){
	seta(na);
}
int square::geta(){
	return a;
}
void square::seta(int na){
	a = na;
}
void square::draw(){
	cout << "Here is a Square at location: (" << getx() << ", " << gety() << ")" << "the side is " << geta() << endl; 
}