#pragma once


class Point
{
private:
	double x, y;

public:
	Point(double _x, double _y) : x(_x), y(_y) {};
	Point(Point& _p) : x(_p.x), y(_p.y) {};
	Point() : x(0), y(0) {};

	double GetX();
	double GetY();

};
