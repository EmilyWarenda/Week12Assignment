// Week12Assignment.h 
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
#include <algorithm>  //sort

using std::cout;
using std::endl;
using std::ostream;
using std::accumulate;
using std::string;

using namespace std;


class Shape {

private:
	int x; 
	int y; 

	string name; 

public:
	Shape(int px, int py, string pname);

	virtual ~Shape();
	
	virtual  string  getName() const;

	virtual int const getSurface()  = 0;
};

class Rectangle : public Shape {

private:
	int length;
	int height;

public:

	Rectangle(int px, int py, string pname, int plength, int pheight);

	virtual int const getSurface()  { return length * height; }
};


class Square : public Rectangle {

public:

	Square(int px, int py, string pname, int plength);
};

