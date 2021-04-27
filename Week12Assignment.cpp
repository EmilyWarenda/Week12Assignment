// Week12Assignment.cpp 
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <array>
#include <map>
#include <set>
#include <functional>
#include <numeric>

#include "Week12Assignment.h"

using std::cout;
using std::endl;
using std::ostream;
using std::accumulate;

using namespace std;

Shape::Shape(int px, int py, string pname) : x(px), y(py), name(pname) { 
	
}

Shape::~Shape(){
}
	
string  Shape::getName() const  { return name; }

Rectangle::Rectangle(int px, int py, string pname, int plength, int pheight) : Shape(px, py, pname), length(plength), height(pheight) { ; }

Square::Square(int px, int py, string pname, int plength) : Rectangle(px, py, pname, plength, plength) { 
	; 
}


