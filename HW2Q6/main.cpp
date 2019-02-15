#include <iostream>
#include "shape.h"
#include "squares.h"
#include "circle.h"
#include "triangle.h"
using namespace std;

int main(void){
	shape *database[4];
	database[0] = new square(0,0,5);
	database[1] = new circle(5,5,6);
	database[2] = new triangle(7,7,3,4,5);
	database[3] = new square(9,5,1);
        int n = sizeof(database)/sizeof(database[0]);
        cout << "The total shape in database is: " << n << endl;
        cout << "In the order of the x value of the location, we have shapes display: " << endl;
        for(int i = 0; i<4; i++){
		database[i]->draw();
	}
}