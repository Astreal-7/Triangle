#pragma once
#include "Point.h"
#include <cmath>


class Triangle
{
private:
	Point v[3];

public:
	Triangle(Point& _v1, Point& _v2, Point& _v3)
	{
		v[0] = _v1;
		v[1] = _v2; 
		v[2] = _v3;
	}

	
	double GetLength(int index);
	double GetPerimetr();
	double GetSquare();
	double GetHeight(int index);
	double GetRadius();
	double GetAngel();

	double operator^ (Triangle& tr2)
	{
		double k = 0;

		if ((GetLength(0) / tr2.GetLength(0)) == (GetLength(1) / tr2.GetLength(1)) == (GetLength(2) / tr2.GetLength(2)))
		{
			return 1;
		}

		return 0;
	}


};
